#include "Conta.cpp"
#include <iostream>
#include <string>

using namespace std;

void exibeSalario(const Conta saldo) {
  cout << "Saldo=" << saldo.getSaldo() << endl;
}

int main() {

  Conta outraConta("12345678", "986545497", "Daniel");
  Conta maisUmaConta("12345678", "986545497", "Daniel");
  float saldo;
  // umaConta.setCPF("Daniel");

  // exibeSalario(umaConta);
  // saldo = umaConta.getSaldo();

  // cout << "\n Sistema Bancário " << endl;
  // cout << "SALDO: " << saldo << endl;
  // cout << "Nome: " << umaConta.getNome() << endl;
  // cout << "CPF: " << umaConta.getCPF() << endl;
  // cout << "Numero: " << umaConta.getNumero() << endl;
  // umaConta.depositar(350);
  // cout << "Saldo: " << umaConta.getSaldo() << endl;
  cout << "Qtd contas: " << Conta::getQtdContas() << endl;
  // umaConta.sacar(150);
  // umaConta.depositar(350);

  // cout << "SALDO ATUAL: " << umaConta.saldo << endl;
}