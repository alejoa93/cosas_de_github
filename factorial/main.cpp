/*
    Tarea de hoy:
1) Clonen en el servidor facciencias.uniandes.edu.co/jhub/ su repositorio de cossas de git de la clase pasada

2) Ingresen al repositorio clonado

3)  van a crear un programa en C++ que calcule calcule la función factorial de un número entero que ustedes mismos ingresen en la terminal
4) Subir el archivo llamado "factorial.cpp" al repositorio.
5) entregar el link del archivo en el repositorio.
*/

#include<iostream>
using namespace std;

int factorial(int a){
    int i = 1;
    int f = 1;
    while(i <= a){
        f *= i;
        i ++;
    }
    return f;
}

int main(){
    cout << "Obtengamos el factorial" << endl;
    int n;
    double c;
    cout << "Por favor ingrese un número entero"<<endl;       cin >> c; 
    n = (int)c;
    while(c!=n){
        cout<<"¡DIJE NÚMERO ENTERO! Intente de nuevo, por favor"<<endl;
        cin >> c;
        n = (int)c;
    }
    cout << "El número es: " << n << endl;
    
    cout << n << "! = "<< factorial(n) <<endl;
    return 0;
}

