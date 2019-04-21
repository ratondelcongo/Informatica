#include <bits/stdc++.h>

using namespace std;

int main(){

    string c, temp;
    cout << "Digite un numero de 8 cifras: ";
    cin >> c;

    for (int i = 0; i < 8; i++){
        temp[i] = c[i];
    }

    for (int i = 0; i < 8; i++){
        if(temp[i] % 2 != 0){
            if((i + 1) % 2 == 0){
                int suma = 0;
                for (int j = i + 1; j < 8; j++) 
                    suma += temp[j];
                if(suma % 2 ==0) 
                    c[i] = '0';
                else 
                    c[i] = '1';
            }
            else{
                c[i] = '1';
            }
        }
        else{
            if((i + 1) % 2 != 0){
                int suma = 0;
                for (int j = 0; j < i; j++) 
                    suma += temp[j];
                if(suma % 2 ==0) 
                    c[i] = '0';
                else 
                    c[i] = '1';
            }
            else{
                c[i] = temp[i];
            }
        }
    }
    
    cout << c << endl;
    return 0;
}
