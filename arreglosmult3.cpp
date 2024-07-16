#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int n;
    cout << "Ingrese la la fila de la matriz. (Su columna se multiplicara x 3): "; cin >> n;
    int matriz[n][3*n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3*n; j++)
        {
            if (j == (3*n - 1) || i == 0 || j == 0 || i == (n-1))
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3*n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }


    return EXIT_SUCCESS;
}

