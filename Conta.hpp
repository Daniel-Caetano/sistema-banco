#pragma once
#include <string>

class Conta {
private:
  std::string numeroConta;
  std::string cpfTitular;
  std::string nomeTitular;
  float saldo = 0;

public:
  void sacar(float valorSacar);
  void depositar(float valorDepositar);
  float getSaldo();
  void setNome(std::string nome);
  void setCPF(std::string cpf);
  void setNumero(std::string numero);
};