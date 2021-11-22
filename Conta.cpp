#include "Conta.hpp"
#include <iostream>

float Conta::getSaldo() { return saldo; }
void Conta::setNome(std::string nome) { nomeTitular = nome; }
void Conta::setCPF(std::string cpf) { cpfTitular = cpf; }
void Conta::setNumero(std::string numero) { numeroConta = numero; }
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
  saldo += valorDepositar;
}