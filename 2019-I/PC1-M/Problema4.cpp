#include <bits/stdc++.h>

using namespace std;

int cant_dias(int d, int m, int a){
    
    int dias = d;
    for(int i = 0; i < a; i++){
        if( i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
            dias += 366;
        else
            dias += 365;
    }
    
    for(int i = 0; i < m; i++){
        switch(i){
            case 0:
                break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                dias += 31;
                break;
            case 2:{
                if( a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
                    dias += 29;
                else
                    dias += 28;
                break;
                
            }
            default:
                dias += 30;
                break;
        }
    }
    return dias;
    
}


int main(){
    
    int dn, mn, an, da, ma, aa;
    
    cout << "Digite la fecha de nacimiento: (DD/MM/AAAA)" << endl;
    scanf("%d/%d/%d",&dn,&mn,&an);
    cout << "Digite la fecha actual: (DD/MM/AAAA)" << endl;
    scanf("%d/%d/%d",&da,&ma,&aa);
    
    int distancia = cant_dias(da,ma,aa) - cant_dias(dn,mn,an);
    
    if(distancia < 365)
        cout << "Edad del individuo: " << distancia/30 << " mes(es)." << endl;
    else
        cout << "Edad del individuo: " << distancia/365 << " año(s)." <<endl;
    
    return 0;
}
