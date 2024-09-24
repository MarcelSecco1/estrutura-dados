#include <iostream>

//Fa�a uma fun��o para verificar se um n�mero � positivo ou negativo. Sendo que o valor de retorno
//ser� 1 se positivo, -1 se negativo e 0 se for igual a 0.

using namespace std;

int verifyNumber(double number);

int main()
{
    double number;
    int result;

    cout << "======Verifica n�mero negativo======" << endl;

    cout << "Informe um n�mero: ";
    cin >> number;

    result = verifyNumber(number);

    if(result == 0){
        cout << "Seu n�mero � 0, portanto n�o � negativo nem positivo." << endl;
    }

    if(result == 1){
        cout << "Seu n�mero � positivo!" << endl;
    }

    if(result == -1){
        cout << "Seu n�mero � negativo!" << endl;
    }

    return 0;
}

int verifyNumber(double number){
    if(number == 0){
        return 0;
    }

    if(number > 0){
        return 1;
    }

    if(number < 0){
        return -1;
    }
}
