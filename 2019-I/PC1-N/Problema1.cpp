#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int x;
    double exp = 1;
    
    cin >> x;
    
    for(int i = 1; i < 25; i++){
        double fac = 1, pot = 1;
        for(int k = 0; k < i; k++)
            pot *= x;
        for(int j = 1; j <= i; j++)
            fac *= j;
        exp += pot/fac;
    }
    
    cout << exp << endl;
    
    return 0;
}
