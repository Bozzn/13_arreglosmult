#include <iostream>
#include  <conio.h>
#include <string>
using namespace std;

int main(){
    int n, m;
    int aux = 0; // Para repetir el bucle.
    int suma = 0;
    do
    {
    cout << "Ingrese el numero de filas: "; cin >> n;
    cout << "Ingrese el numero de columnas: "; cin >> m;
    int matriz[n][m];
    if (m == n)
    {

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Ingrese el valor ["<<i<<"]["<<j<<"]: "; cin >> matriz[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i < j)
            {
                suma += matriz[i][j];
            }   
        }
        
    }
    }
    else
    {
        cout << "La matriz no es cuadrada, por lo tanto no tiene diagonal principal. (Intente nuevamente.)";
        aux = 1;
    }
    }
    while(aux == 1);
    cout << "La suma del triangulo superior es: " << suma;

    return EXIT_SUCCESS;
}
