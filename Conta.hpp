#pragma once
#include "Titular.hpp"
#include <string>

class Conta {
private:
  static int qtdContas;

public:
  static int getQtdContas();

private:
  std::string numeroConta;
  Titular titular;
  float saldo = 0;

public:
  Conta(std::string numeroConta, Titular titular);
  ~Conta();
  float getSaldo() const;
  // std::string getNome() const;
  // std::string getCPF() const;
  std::string getNumero() const;
  void sacar(float valorSacar);
  void depositar(float valorDepositar);
};