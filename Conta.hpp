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
  void setSaldo();
  void setNome(std::string nome);
  std::string getNome() const;
  void setCPF(std::string cpf);
  std::string getCPF() const;
  void setNumero(std::string numero);
  std::string getNumero() const;
};