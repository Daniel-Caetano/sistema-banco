#pragma once
#include <string>

class Conta {
private:
  std::string numeroConta;
  std::string cpfTitular;
  std::string nomeTitular;
  float saldo = 0;

public:
  Conta(std::string numeroConta, std::string cpfTitular,
        std::string nomeTitular);
  void sacar(float valorSacar);
  void depositar(float valorDepositar);
  float getSaldo() const;
  std::string getNome() const;
  std::string getCPF() const;
  std::string getNumero() const;
};