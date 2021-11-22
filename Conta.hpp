#pragma once
#include <string>

class Conta {
private:
  std::string numero;
  std::string cpfTitular;
  std::string nomeTitular;
  float saldo;

public:
  void sacar(float valorSacar);
  void depositar(float valorDepositar);
};