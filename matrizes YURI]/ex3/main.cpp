#include <iostream>

#define TAMcoluna 10
#define TAMlinha 15

using namespace std;

int main()
{
    srand(time(NULL));
    int M[TAMcoluna][TAMlinha], vet[TAMlinha], i, j, menor;

    for(i=0;i<TAMcoluna;i++) {
        for(j=0; j<TAMlinha; j++) {
            M[i][j] = rand() % 10 + 1;
            cout << M[i][j] << " ";
        }
        cout << "" << endl;
    }

    for(i=0;i<TAMcoluna;i++) {
        menor = M[i][j];
        for(j=0; j<TAMlinha; j++) {
            if (M[i][j] < menor) {
                menor = M[i][j];
            }
        vet[i] = menor;
        }
    }

    cout << "\nlista 2:\n";

    for(i=0;i<TAMcoluna;i++) {
        for(j=0; j<TAMlinha; j++) {
            cout << M[i][j] * vet[i] << " " ;
        }
        cout << "" << endl;
    }



}
