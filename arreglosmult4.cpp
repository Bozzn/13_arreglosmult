#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    float sumas[4] = {0,0,0,0};
    float suma = 0;
    float matriz[7][4];
    string dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    for (int j = 0; j < 4; j++)
    {
        cout << "Semana " << j+1 << ": \n";
        for (int i = 0; i < 7; i++)
        {
            cout << "Ingrese las ventas del dia " << dias[i] << ": "; cin >> matriz[i][j];
        }
        cout << "\n";
    }
    
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 7; i++)
        {
            sumas[j] += matriz[i][j];
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "La suma de la semana " << i+1 << ": " << sumas[i] << endl;
    }
    cout << "\n";
    for (int i = 0; i < 4; i++)
    {
        suma += sumas[i];
    }
    
    cout << "La suma total del mes: " << suma;
    return EXIT_SUCCESS;
}