#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int c1, c2, c3;
    for(int i = 100; i < 1000; i++){
        c1 = i/100;
        c2 = (i%100)/10;
        c3 = i%10;
        
        if(c1*c1+c2*c2+c3*c3 == i/3)
            cout << i <<endl;
    }
    
    return 0;
}
