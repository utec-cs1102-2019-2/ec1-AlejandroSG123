#include <iostream>
using namespace std;

int calcular_promedio(int n, int notas[]);
int calcular_mayor(int n,int notas[]);
int imprimir_notas(int n,int notas[],);
int main(){
    int n = 0;
    do{
        cout<<"Ingrese la cantidad de alumnos: ";
        cin>>n;
    }while(n>=15);
    int *notas = new int[n];
    for (int i = 0; i < n; ++i) {
        cin>>notas[i];
    }cout<<"El promedio: "<<calcular_promedio(n,notas)<<endl;
    cout<<"El mayor: "<<calcular_mayor(n,notas)<<endl;
}
int calcular_promedio(int n, int notas[]){
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        suma = suma + notas[i];
    }
    return suma/n;
}
int calcular_mayor(int n,int notas[]){
    int mayor = 0;
    for (int i = 0; i < n; ++i) {
        if(notas[i]>mayor){
            mayor = notas[i];
        }
    }
    return mayor;
}
int imprimir_notas()