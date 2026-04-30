
#include <iostream>
#define TAM_coluna 9
#define TAM_linha 8

using namespace std;

int main()
{
    int M[TAM_coluna][TAM_linha], i, j, soma, qtd;
    srand(time(NULL));

    for(i = 0 ; i < TAM_coluna ; i++) {
        for (j = 0 ; j < TAM_linha ; j++) {
            M[i][j] = rand() % 30 + 1;
            cout << M[i][j];
        }
        cout << endl;
    }

    qtd = 0;
    soma = 0;


    for(i = 0 ; i < TAM_coluna ; i++) {
        for (j = 0 ; j < TAM_linha ; j++) {
            if (M[i][j] % 2 == 0) {
                qtd += 1;
                soma += M[i][j];

            }

        }
    }
    cout << "A soma é: " << soma;

}
