#include "Conta.cpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

  Conta umaConta;
  float saldo;

  saldo = umaConta.getSaldo();

  cout << "\n Sistema Bancário " << endl;
  cout << "SALDO: " << saldo << endl;
  // umaConta.sacar(150);
  // umaConta.depositar(350);

  // cout << "SALDO ATUAL: " << umaConta.saldo << endl;
}