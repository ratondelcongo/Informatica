#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout << "digite un numero: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        int suma = 0;
        for (int j = 1; j < i; j++)
        {
            if(i % j == 0)
                suma += j;
        }
        if (suma == i)
        {
            cout << i << endl;
        }
        
        
    }
    
    return 0;
}
