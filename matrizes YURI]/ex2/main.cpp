
#include <iostream>
#define TAM 10

using namespace std;

int main()
{
    int M[TAM][TAM], i, j, m, soma_par = 0, soma_impar = 0;
    float media_pares=0.0, media_impares=0.0;
    srand(time(NULL));

    for(i = 0 ; i < TAM ; i++) {
        for (j = 0 ; j < TAM ; j++) {
            M[i][j] = rand() % 50 + 1;
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

    for(i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++) {
            if (j % 2 == 0) {
            soma_par += M[i][j];
        }
            if (i % 2 != 0) {
                soma_impar += M[i][j];
            }
        }
    }

    media_pares = soma_par / 50;
    media_impares = soma_impar / 50;

    cout << "\n" << soma_par << " " << soma_impar << " " << media_pares << " " << media_impares << endl;

    cout << "\nA diferença entre a média de colunas pares e a média de linhas ímpares é: " << media_pares - media_impares;


}
