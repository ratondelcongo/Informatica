#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int x, suma = 0, rpta;
    cout << "Digite un valor: ";
    cin >> x;
    
    for(int i = 1; suma < x ; i++){
        suma += i*i - i - 2;
        rpta = i-1;
    }
    cout << "rpta: " << rpta << endl;
    
    return 0;
}
