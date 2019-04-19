#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, mayor = -99999; 
    int cont_impar = 0;     //contador para numeros impares
    int cont_par = 0;       //contador para numeros pares
    
    cout << "Digite numeros\n";
    
    while(cin >> n && n!= 0){ //while activo mientras se ingresen numeros Y estos numeros sean diferentes de 0
        if(n % 2 == 0)
            cont_par++;     //el contador de pares aumenta de 1 en 1
        else
            cont_impar++;   //lo mismo con el contador de impares
        if(n > mayor)
            mayor = n;      // con esto almacenamos el mayor numero
    }
    cout << "Cantidad de pares: " << cont_par << endl;
    cout << "Cantidad de impares: " << cont_impar << endl;
    cout << "El mayor de todos: " << mayor << endl;

    return 0;
}
