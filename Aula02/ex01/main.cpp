#include <iostream>

using namespace std;

int somar(int a, int b){
    return a + b;
}

int main()
{
    int a, b, resultado = 0;
    int *ptrResultado;

    cout << "Informe o primeiro n�mero: ";
    cin >> a;

    cout << "Informe o segundo n�mero: ";
    cin >> b;

    resultado = somar(a,b);

    ptrResultado = &resultado;

    cout << "O seu resultado �: " << *ptrResultado << endl;
    cout << "O seu endere�o de mem�ria �: " << ptrResultado << endl;

    return 0;
}
