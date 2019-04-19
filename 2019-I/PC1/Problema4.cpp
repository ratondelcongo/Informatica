#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        
        int n, c = 0;
        
        cin >> n;
        
        do{
            int aux = n, inverso = 0, cifra;

            while( n > 0 ) {    // con este while invertimos el numero
                cifra = n % 10;
        
                inverso = inverso * 10 + cifra;
                n = n / 10;     // tambien se puede escribir n /= 10;
            }
            n = inverso;        // numero igual a su inverso
            if(n == aux)
                break;          
            n += aux;
            // sumamos el original almacenado en aux
            c++;
        }while(c < 100);     // si el numero no es capicula Y el contador es menor a 100
                                            // el do-while se seguira ejecutando
        cout << n << endl;
    }   
    return 0;
}    
