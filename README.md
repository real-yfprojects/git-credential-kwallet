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
```
git config credentials.helper "kwallet"
```
See also [gitcredentials](https://git-scm.com/docs/gitcredentials).
