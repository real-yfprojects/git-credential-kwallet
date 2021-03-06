# git-credential-kwallet

Git credential helper for KWallet

## Dependencies
* KWallet for obvious reasons <br>(the *apt* packages `libkf5wallet5` and `libkf5wallet-dev`)
* help2man as an optional dependency for generating man pages

## Install
```bash
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
sudo cmake --build . --target install
```

## Usage
Configure as:
```bash
git config --global credentials.helper "kwallet --wallet kdewallet --folder git-credentials"
```
You can replace `kdewallet` with your wallet and `git-credentials` with your folder name of choice.
The folder will automatically be created. You can remove the `--global` switch if you want to configure the helper only for the current git repository.

See also [gitcredentials](https://git-scm.com/docs/gitcredentials) and [git-credential](https://git-scm.com/docs/git-credential).
