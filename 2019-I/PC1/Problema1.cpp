#include <bits/stdc++.h>

using namespace std;

int main(){

    // Se tiene un problema clasico de RM:
    // la solucion es hacer el codigo de una serie de 
    // fibonacci,
    // sea pareja fertil PF y pareja no fertil (CRIA)
    // inicialmente: 1PF
    // 1M         2M          3M           4M
    // PF(1)      PF(1)       PF(1)        PF(1)
    // CRIA(1,1)  CRIA(1,2)   CRIA(1,3)    CRIA(1,4)
    //            PF(1,1)     PF(1,2)      PF(1,3)
    //                        PF(1,1)      PF(1,2)
    //                        CRIA(1,1,1)  CRIA(1,2,1)
    //                                     PF(1,1)
    //                                     CRIA(1,1,2)
    //                                     PF(1,1,1)
    //                                     
    // el primer mes PF(1) tiene CRIA(1,1), para el segundo mes
    // PF(1) tiene CRIA(1,2) y CRIA(1,1) se vuelve PF(1,1)
    // para el tercer mes PF(1) tiene CRIA(1,3), CRIA(1,2) se 
    // vuelve PF(1,2) y PF(1,1) tiene CRIA (1,1,1) y se puede ver el fibonacci 
    
    int cont = 0;
    int i1 = 1;
    int i2 = 1;
    for(int i = 0; i < 12; i++){
        cont = i1 + i2;
        i1 = i2;
        i2 = cont;
    }
    cout << cont << endl;
    
    return 0;
}
