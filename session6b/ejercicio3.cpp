#include <iostream>
#include <ctime>
#include <ctime>
using namespace std;

void
int main() {
    int filas = 0;
    int columnas = 0;
    cin>>filas;
    cin>>columnas;
    int **matrix = nullptr;
    matrix = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        matrix[i] = new int[columnas];
        for (int j = 0; j < columnas; ++j) {
            matrix[i][j] = rand()%100;
        }
    }
    return 0;
}