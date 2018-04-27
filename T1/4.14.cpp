/*
4.14(134)
Desenvolva um programa em C++ que determinar� se um cliente de uma loja de departamentos
excedeu o limite de cr�dito em conta-corrente. Para cada cliente, os seguintes fatos est�o
dispon�veis:

    a) N�mero da conta (um inteiro)
    b) Saldo no princ�pio do m�s
    c) Total de todos os itens comprados a cr�dito por este cliente neste m�s
    d) Total de todos cr�ditos do cliente nesta conta neste m�s
    e) Limite de cr�dito permitido

O programa deve utilizar uma intru��o while e para inserir cada um desses fatos, calcular o
novo saldo (=saldo inicial + taxas - creditor) e determinar se o novo saldo excede o limite
de credito do cliente. Para aqueles clientes cujo limite de credito � excedido, o programa
deve exibir o numero da conta do cliente, o limite de credito, o novo saldo e a msg
'Limite de credito excedido'
*/
#include<iostream>
using namespace std;
int main()
{
    int conta=0;
    float saldoi, saldon, taxas, creditos, lcredito, balanco;

    cout << "Informe numero da conta (-1 para finalizar): " << endl;
    cin >> conta;
    while(conta != -1)
    {
        cout << "Informe saldo inicial: " << endl;
        cin >> saldoi;
        cout << "Informe total de taxas: " << endl;
        cin >> taxas;
        cout << "Informe total de creditos: " << endl;
        cin >> creditos;
        cout << "Informe limite de creditos: " << endl;
        cin >> lcredito;
        saldon=saldoi+taxas-creditos;
        cout << "Novo saldo: " << saldon << endl;
        if (saldon>lcredito)
        {
            cout << "Conta: " << conta << endl;
            cout << "Limite de credito: " << lcredito << endl;
            cout << "Saldo: " << saldon << endl;
            cout << "Limite de credito ultrapassado" << endl;
        }
        cout << "Informe numero da conta (-1 para finalizar): " << endl;
        cin >> conta;
    }

    return(0);
}







