#include <iostream>

using namespace std;

int tripleNumber(int number);

int main()
{
    int n;

    do{
        cout << "Informe um n�mero para continuar: ";
        cin >> n;

        if(n < 0){
            cout << "Informe um n�mero maior que 0 \n";
        }

    }while(n < 0);

    cout << "O triplo do seu n�mero �: " << tripleNumber(n) << endl;

    return 0;
}

int tripleNumber(int number){
    return number * 3;
}
