#include <iostream>

//Escreva um programa que contenha duas vari�veis reais. Compare seus endere�os e exiba o
//maior endere�o. Exiba os valores das vari�veis tamb�m.

using namespace std;

int main()
{
    double number1, number2, *ptrNumber1, *ptrNumber2;

    ptrNumber1 = &number1;
    ptrNumber2 = &number2;

    cout << "======Comparar Endere�o======" << endl;

    cout << "Informe o n�mero 1: ";
    cin >> number1;

    cout << "Informe o n�mero 2: ";
    cin >> number2;

    cout << "Ponteiro 1: " << ptrNumber1 << endl;
    cout << "Ponteiro 2: " << ptrNumber2 << endl;

    if(ptrNumber1 > ptrNumber2){

        cout << "O ponteiro maior � o 1: " << ptrNumber1 << endl;
        cout << "Seu valor: " << *ptrNumber1;
    }else{
        cout << "O ponteiro maior � o 2: " << ptrNumber2 << endl;
        cout << "Seu valor: " << *ptrNumber2;
    }

    return 0;
}
