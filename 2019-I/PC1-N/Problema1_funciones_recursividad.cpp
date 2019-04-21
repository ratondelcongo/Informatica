#include <bits/stdc++.h>

using namespace std;

double fac(int n){                   // funcion recursiva para calcular
    if(n == 0)                          // el factorial de un numero
        return 1;                       
    else                                
        return n*fac(n-1);
}

double pot(int n, int p){                  // funcion recursiva para calcular
    if(p == 0)                          // la pontencia n^p
        return 1;
    else
        return n*pot(n,p-1);
}

int main(){
    
    int x;
    double exp = 0;
    cin >> x;
    
    for(int i = 0; i < 25; i++){             
                                             
        exp += pot(x,i)*1.0/fac(i); 
                                            
    }                                       
    cout << exp << endl;                    
    
    return 0;
}
