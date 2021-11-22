#include "Conta.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

  Conta umaConta;

  cout << "\n Sistema Bancário " << endl;
  // cout << "SALDO: " << umaConta.saldo << endl;
  umaConta.sacar(150);
  umaConta.depositar(350);

  // cout << "SALDO ATUAL: " << umaConta.saldo << endl;
}