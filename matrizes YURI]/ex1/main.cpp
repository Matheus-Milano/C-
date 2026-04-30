#include <iostream>

#define TAMcoluna 15
#define TAMlinha 7

using namespace std;

int main() {

    srand(time(NULL));
    int M[TAMcoluna][TAMlinha], i, j, maior;

    for(i=0;i<TAMcoluna;i++) {
        for(j=0; j<TAMlinha; j++) {
            M[i][j] = rand() % 15 + 1;
            cout << M[i][j] << " ";
        }
        cout << "" << endl;
    }

    maior = M[0][0];


    for (i = 0 ; i < TAMcoluna ; i++) {
        for (j = 0 ; j < TAMlinha ; j++) {
            if (M[i][j] > maior) {
                maior = M[i][j];
            }
        }
    }

    cout << "";

    for (i = 0 ; i < TAMcoluna ; i++) {
        for (j = 0 ; j < TAMlinha ; j++) {
            if (M[i][j] == maior) {
                cout << "O maior é: " << maior << " e está na posição: " << i << " e " << j;
            }
        }
    }
}
