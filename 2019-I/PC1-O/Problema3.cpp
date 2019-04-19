#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, n2, x;
    
    cout << "Digite 5 numeros" << endl;
    
    cin >> n;                               // leemos el primer numero el cual es fijo
    
    int distancia = 99999;                  // 
    
    for(int i = 0; i < 4; i++){             // con este for podemos leer 4 numero y hacer calculos con ellos
        cin >> n2;                          // leemos un valor
        if(abs(n - n2) <= distancia){       // si el valor absoluto de la diferencia entre el numero "n2" y el primer numero 
            distancia = abs(n - n2);        // "n1" es menos que distancia (inicializado en 99999) distancia se almancena con
            x = n2;                         // esa diferencia, y se guarda el numero "más cercano".
        }        
    }
    
    cout << x << endl;
    
    return 0;
}
