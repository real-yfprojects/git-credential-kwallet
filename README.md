# git-credential-kwallet

**This Project has been forked from [Templar-von-Midgard](https://github.com/Templar-von-Midgard/git-credential-kwallet) to improve upon the work.**

Git credential helper for KWallet

## Dependencies
* KWallet for obvious reasons
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
[credential]
    helper = kwallet
```
See also [gitcredentials](https://git-scm.com/docs/gitcredentials).
