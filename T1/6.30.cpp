/*
6.30(244)
Dizemos que um inteiro é primo se ele é divisível somente por 1 e ele próprio.
Por exemplo, 2, 3, 4 e 7 são primos, mas 4, 6, 8 e 9 não são.

    a) Escreva uma função que determina se um numero é primo
    b) Utilize essa função em um programa que determina e imprime todos os números primos
    entre 2 e 10000. Quantos desses 10000 números você realmente tem de testar antes de
    certificar-se de que encontrou todos os primos?
    c) Inicialmente você poderia pensar que n/2 é o limite superior que deve testar para
    ver se um numero é primo, mas você precisa ir apenas até a raiz quadrada de n. Porque?
    Reescreva o programa e execute-o de ambas maneiras. Estime o melhor desempenho.

*/

#include<iostream>
#include<math.h>
using namespace std;
/*A*/
bool imprimea(int n)
{
    bool p=true;
    int d=2;
    if(n<2){p=false;}
    else
    {
        while(p && d<=sqrt(n))
        {
            if(n%d == 0){p=false;}
            d=d+1;
        }
    }
    if(p){cout << endl << n << " e primo" << endl;}
    else{cout << endl << n << " nao e primo" << endl;}
    return 0;
};
/*B*/
int imprimeb()
{
    int m=10000;
    int matriz[ m ], r1, r2, i=0;

    for (r1=0; r1<m; r1++) {matriz[ r1 ]=1;}
    for (r1=1; r1<m; r1++)
    {
        if (matriz[ r1 ]==1 && r1!=1)
        {
            for (r2=r1; r2<=m; r2++)
            {
                if (r2 % r1==0 && r2!=r1)
                {
                    matriz[ r2 ]=0;
    }   }   }   }
    for (r1=2; r1<m; r1++)
    {
        if (matriz[ r1 ]==1)
        {
            cout << r1 << ("  ");
            ++i;
    }   }
    cout << endl << i << " Numeros testados ate encontrar todos no intervalo 2-10000." << endl;
    return 0;
}
/*C*/
bool imprimec()
{
    bool p=true;
    int n, d=2, x;
    for(x=1; x<=10000; x++)
    {
        d=2; n=x; p=true;
        if(x<1){p=false;}
        else
        {
            n=x;
            while(p && d<=sqrt(n))
            {
                if(n%d == 0){p=false;}
                d=d+1;
            }
        }
        if(p){cout << x << " ";}
    }
    return 0;
};
int main()
{
    int n;
    cout << "informe o numero: ";
    cin >> n;
    if(n==1){cout << endl << n << " e primo" << endl;}
    else{imprimea(n);}
    imprimeb();
    imprimec();
}










