#include <iostream>
#define NUMBER 4

using namespace std;

void preencherVetor(double *ptrVetor);
void atualizaVetor(double *ptrVetor);
void imprimirVetor(double *ptrVetor);

int main()
{
    double vetor[NUMBER];
    preencherVetor(vetor);
    atualizaVetor(vetor);
    imprimirVetor(vetor);
    return 0;
}

void preencherVetor(double *ptrVetor)
{

    for(int i=0; i<NUMBER; i++){
        do{
            cout << "Informe o valor " << i+1 << " do vetor: ";
            cin >> ptrVetor[i];
        }while(ptrVetor[i] < 0 || ptrVetor[i] > 10);
    }
}

void atualizaVetor(double *ptrVetor)
{
    for(int i=0; i < NUMBER; i++){
        if(ptrVetor[i] < 6 && ptrVetor[i] >=4){
            cout << "O aluno " << i+1 << " est� de recupera��o. \n";
            do{
                double temp = ptrVetor[i];
                cout << "Informe a nota da sua recupera��o: ";
                cin >> ptrVetor[i];

                if(temp > ptrVetor[i] || ptrVetor[i] < 6){
                    cout << "O aluno " << i+1 << " est� REPROVADO. \n";
                }
                if(ptrVetor[i] >= 6){
                    cout << "O aluno " << i+1 << " est� APROVADO. \n";
                }


            }while(ptrVetor[i] < 0 || ptrVetor[i] > 10);
        }

        if(ptrVetor[i] >= 0 && ptrVetor[i] < 4){
            cout << "O aluno " << i+1 << " est� REPROVADO. \n";
        }

        if(ptrVetor[i] >= 6 && ptrVetor[i] <= 10){
            cout << "O aluno " << i+1 << " est� APROVADO. \n";
        }
    }
}

void imprimirVetor(double *ptrVetor)
{
    for(int i=0; i < NUMBER; i++){
        cout << "O n�mero na posi��o " << i+1 << " �: " << ptrVetor[i] << endl;
    }
}
