#include "Conta.hpp"
#include <iostream>

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