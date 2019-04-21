#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;

    cout<< "Digite un numero impar: ";
    cin>>n;

    int M[n][n];
    memset(M,0,sizeof(M));

    /*  memset es una funcion que permite cargar una variable
        con valores que deseemos, en caso de la matriz M,
        esta fue cargada con puros 0 (ceros), otra forma de 
        cargar con 0s una matris es esta: 

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
            MagicSquare[i][j] = 0;
            }
        }
    */

    int n_f, n_c;
    int f = 0 ;
    int c = n / 2;

    for ( int i = 1; i <= n*n; i++ ){
        M[f][c] = i;
        n_f = (f + 2) % n;
        n_c = (c + 1) % n;
        if ( M[n_f][n_c] == 0 ){
            f = n_f;
            c = n_c;
        }
        else{
            f = (f + 1) % n;
        }

    }

    cout << "Cubo magico:\n";
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << M[i][j]<<"\t";
        cout << endl;
    }
    
    return 0;
}
