#ifndef CREDENTIAL_HPP
#define CREDENTIAL_HPP

#include <QString>

struct Credential {
  QString protocol;
  QString host;
  QString username;
  QString password;
};

struct WalletSettings {
  QString wallet;
  QString folder;
  bool debug;
};

Credential read();
void write(Credential&&);

Credential get(Credential&&, WalletSettings);
void store(Credential&&, WalletSettings);
void erase(Credential&&, WalletSettings);

#endif
