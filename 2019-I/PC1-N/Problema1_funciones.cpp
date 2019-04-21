#include <bits/stdc++.h>

using namespace std;
double fac(int n){
    double fac = 1;
    for(int j = 1; j <= n; j++)
            fac *= j;
    return fac;
}

double pot(int n, int i){
    double pot = 1;
        for(int k = 0; k < i; k++)
            pot *= n;
    return pot;
}

int main(){
    
    int x;
    double exp = 1;
    
    cin >> x;
    
    for(int i = 1; i < 25; i++)
        exp += pot(x,i)/fac(i);
    
    cout << exp << endl;
    
    return 0;
}
