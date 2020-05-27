/*
Archivo que genera la evolución temporal de una piedra hacia arriba, con h0 = 7.5 m.
*/

#include<iostream>
#include"funciones.h"

using namespace std;

    
int main(void){
    double v0;
    double h0;
    cin >> h0;
    cin >> v0;
    double X[3] = {h0,v0,0};
    double * X_n = new double[3];
    while (X[0]>0){
        cout<<X[0]<<","<<X[1]<<","<<X[2]<<endl;
        X_n = RK4(X, X[2], 0.01);
        for (int i=0; i<3; i++){
            X[i] = X_n[i];
        }
    }
    
    return 0;
}