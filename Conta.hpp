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

protected:
  float saldo;

public:
  Conta(std::string numeroConta, Titular titular);
  virtual ~Conta();
  float getSaldo() const;
  std::string getNumero() const;
  void sacar(float valorSacar);
  void depositar(float valorDepositar);
  virtual float taxaSaque() const = 0;
};