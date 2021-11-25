//#include "Autenticavel.hpp"
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Titular.hpp"
#include <iostream>
#include <string>

using namespace std;

void exibe_saldo(const Conta &conta) {
  cout << "O saldo da conta é: " << conta.getSaldo() << endl;
}

void realiza_saque(Conta &conta) { conta.sacar(200); }
void FazLogin(Autenticavel &alguem, string senha) {
  if (alguem.autentica(senha)) {
    cout << "Login realizado com sucesso" << endl;
  } else {
    cout << "Senha inválida" << endl;
  }
}

int main() {
  Titular titular(Cpf("123.456.789-10"), "Daniel", "XXXXXX");

  ContaPoupanca contaUm("123456", titular);
  contaUm.depositar(2000);
  realiza_saque(contaUm);

  exibe_saldo(contaUm);

  Titular titularDois(Cpf("098.765.432-10"), "Vinicius Dias", "outrasenha");
  ContaCorrente contaDois("654321", titularDois);
  contaDois.depositar(300);

  ContaCorrente contaTres("546312", titular);

  contaDois.transferePara(contaTres, 250);

  exibe_saldo(contaDois);
  exibe_saldo(contaTres);

  Gerente daniel(Cpf("999.999.999-99"), "Daniel Caetano", 1500, 2, "123456");
  cout << "Nome Gerente: " << daniel.getNome() << endl;
  cout << "Número de contas: " << Conta::getQtdContas() << endl;

  return 0;
}