#include "Conta.cpp"
#include "Cpf.cpp"
#include "Funcionario.cpp"
#include "Pessoa.cpp"
#include "Titular.cpp"
#include <iostream>
#include <string>

using namespace std;

void exibeSalario(const Conta saldo) {
  cout << "Saldo=" << saldo.getSaldo() << endl;
}

int main() {
  // Cpf numCpf("999.999.999-99");
  // agora sim
  Funcionario funcionario(Cpf("999.999.999-99"), "Daniel", 9000);
  Titular titular(Cpf("999.999.999-99"), "Daniel");
  Conta umaConta("12345678", titular);
  Conta outraConta("12345678", titular);
  Conta maisUmaConta("12345678", titular);
  // Funcionario umaConta.getQtdContas();
  // umaConta.setCPF("Daniel");

  exibeSalario(umaConta);
  // saldo = umaConta.getSaldo();

  // cout << "\n Sistema Bancário " << endl;
  // cout << "SALDO: " << saldo << endl;

  cout << "Numero: " << umaConta.getNumero() << endl;
  umaConta.depositar(350);
  cout << "Saldo: " << umaConta.getSaldo() << endl;
  cout << "Qtd contas: " << Conta::getQtdContas() << endl;

  // umaConta.sacar(150);
  // umaConta.depositar(350);

  // cout << "SALDO ATUAL: " << umaConta.saldo << endl;
}