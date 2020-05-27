#include<iostream>
#include<vector>

using namespace std;

double * deriv(double X[2]){
    int N = 2;
    double * X_n = new double[2];
    X_n[0] = X[1];
    X_n[1] = -9.8;
    return X_n;
}
double * RK4( double X[2], double t, double dt){
    int N = 2;
    int M = 3;
    double X_t[2] = {X[0],X[1]};
    double * k1 = new double[N];
    double * k2 = new double[N];
    double * k3 = new double[N];
    double * k4 = new double[N];
    double * X_new = new double[M];
    k1 = deriv(X);
    for(int i=0; i<2; i++){
        k1[i] *= dt;
        X_t[i] = X[i] + k1[i]/2;
    }
    k2 = deriv(X_t);
    for(int i=0; i<2; i++){
        k2[i] *= dt;
        X_t[i] = X[i] + k2[i]/2;
    }
    k3 = deriv(X_t);
    for(int i=0; i<2; i++){
        k3[i] *= dt;
        X_t[i] = X[i] + k3[i];
    }
    k4 = deriv(X_t);
    for(int i=0; i<2; i++){
        k4[i] *= dt;    
        X_new[i] = X[i] + ((k1[i]+(2*k2[i])+(2*k3[i])+k4[i])/6);
    }
    X_new[2] = t + dt;
    if (X_new[0] < 0){
        X_new[0] = 0;
        X_new[1] = 0;
    }
    return X_new;
    
}