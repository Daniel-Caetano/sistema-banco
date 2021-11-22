#include "Conta.hpp"
#include <iostream>

Conta::Conta(std::string numeroConta, std::string cpfTitular,
             std::string nomeTitular) {
  this->numeroConta = numeroConta;
  this->cpfTitular = cpfTitular;
  this->nomeTitular = nomeTitular;
}
float Conta::getSaldo() const { return saldo; }
void Conta::setNome(std::string nome) { nomeTitular = nome; }
std::string Conta::getNome() const { return nomeTitular; }
void Conta::setCPF(std::string cpf) { cpfTitular = cpf; }
std::string Conta::getCPF() const { return cpfTitular; }
void Conta::setNumero(std::string numero) { numeroConta = numero; }
std::string Conta::getNumero() const { return numeroConta; }
void Conta::sacar(float valorSacar) {
  if (valorSacar <= 0) {
    std::cout << "Não pode sacar valor menor ou igual a zero" << std::endl;
    return;
  }
  if (saldo <= 0 || valorSacar > saldo) {
    std::cout << "\nSaldo insuficiente" << std::endl;
    return;
  }
  saldo -= valorSacar;
}
void Conta::depositar(float valorDepositar) {
  if (valorDepositar <= 0) {
    std::cout << "Não pode depositar valor menor ou igual a zero" << std::endl;
    return;
  }
  this->saldo += valorDepositar;
}