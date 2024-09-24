#include <iostream>

//Fa�a um programa que leia dois valores inteiros e chame uma fun��o que receba estes 2 valores
//de entrada e retorne o maior valor na primeira vari�vel e o menor valor na segunda vari�vel.
//Escreva o conte�do das 2 vari�veis na tela.

using namespace std;

void verifyValues(int* ptrA, int* ptrB);

int main()
{
    int a, b;

    cout << "======Compara Valores======" << endl;

    cout << "Informe o valor de A: ";
    cin >> a;

    cout << "Informe o valor de B: ";
    cin >> b;

    verifyValues(&a, &b);

    cout << "A: " << a << endl;
    cout << "B: " << b;

    return 0;
}

void verifyValues(int *ptrA, int *ptrB)
{
    int maior;

    if(*ptrA < *ptrB)
    {
        maior = *ptrB;
        *ptrB = *ptrA;
        *ptrA = maior;
    }

    return;
}
