#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int n, m; //n: filas, m: columnas
    cout << "Ingrese el numero de Partidos Politicos: "; cin >> n;
    cout << "Ingrese el numero de departamentos: "; cin >> m;
    int matriz[n][m];
    string Politicos[6] = {"Avanza Pais", "Democrata Verde", "Fuerza Popular", "Juntos por el Peru", "Peru Libre", "Podemos Peru"};
    string ciudades[25] = {"Amazonas", "Ancash", "Apurimac", "Arequipa", "Ayacucho", "Cajamarca", "Callao", "Cusco", "Huancavelica", "Huanuco", "Ica", "Junín", "La Libertad", "Lambayeque", "Lima", "Loreto", "Madre de Dios", "Moquegua", "Pasco", "Piura", "Puno", "San Martin", "Tacna", "Tumbes", "Ucayali"}; 
    int posP[6]; // Variable para almacenar las pocisiones de los Partidos Políticos elegidos.
    int posD[25]; // Variable para almacenar las pocisiones de los departamentos elegidos.
    int posG; // Variable para almacenar la posicion del politico con más votos.
    int suma[n]; // Almacenar el total de votos de cada político.
if (n <= 6 && m <= 25)
{
    system("cls");
    cout << "\n\n-----------PARTIDOS POLITICOS-----------\n\n";
    cout << "Ingrese los partidos politicos que desea agregar: \n";
    cout << "Opciones disponibles: \n";
    cout << "1) Avanza Pais.\t\t2) Democrata Verde.\n3) Fuerza Popular.\t4) Juntos por el Peru.\n5) Peru Libre.\t\t6) Podemos Peru.\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Slots ("<< i+1 << "/" << n << ")\n";
        cout << "Elija el Partido Politico " << i+1 << ": "; cin >> posP[i];
        
    }
    system("cls");
    cout << "\n\n-------------DEPARTAMENTOS-------------\n\n";
    cout << "Ingrese los departamentos que desea agregar: \n";
    cout << "Opciones disponibles: \n\n";
    cout << "1) Amazonas\t2) Ancash\t\t3) Apurimac\t4) Arequipa\t5) Ayacucho\n6) Cajamarca\t7) Callao\t\t8) Cusco\t9) Huancavelica\t10) Huanuco\n11) Ica\t\t12) Junin\t\t13) La Libertad\t14) Lambayeque\t15) Lima\n16) Loreto\t17) Madre de Dios\t18) Moquegua\t19) Pasco\t20) Piura\n21)Puno\t\t22) San Martin\t\t23) Tacna\t24) Tumbes\t25) Ucayali\n";
    cout << "\n";
    for (int i = 0; i < m; i++)
    {
        cout << "Slots ("<< i+1 << "/" << m << ")\n";
        cout << "Elija los departamentos que desea agregar: "; cin >> posD[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        system("cls");
        cout << "\n\n------------CONTABILIZACION DE VOTOS-----------\n\n";
        suma[i] = 0;
        cout << "Partido politico '" << Politicos[posP[i] - 1] << "': \n\n";
        for (int j = 0; j < m; j++)
        {
            cout << "Digite la cantidad de votos en el departamento " << ciudades[posD[j] - 1] << ": "; cin >> matriz[i][j];
            suma[i] += matriz[i][j];
        }
        cout << "\n";
    }
}
else
{
    system("cls");
    cout << "\nSolo existen 6 Partidos Politicos dentro del almacenamiento.\n";
    cout << "                            y";
    cout << "\nSolo existen 25 departamentos disponibles en el almacenamiento.\n";
}
int mayor = 0; // Mayor numero de votos.
system("cls");
cout << "\n------------PARTIDO POLITICO------------\n\n";
cout << "Ganador: ";

for (int i = 0; i < n; i++)
{
    if (suma[i] > mayor)
    {
        mayor = suma[i];
        posG = posP[i];
    }

}



cout << Politicos[posG - 1] << " con una cantidad de " << mayor << " votos.";
cout << "\n\nPresione una tecla para continuar.\n";
getch();
system("cls");
cout << "\n------------PARTIDO GANADOR POR CADA CIUDAD-----------\n\n";
for (int i = 0; i < m; i++)
{
    mayor = 0;
    cout << "Ganador de " << ciudades[posD[i]-1] << " -> ";
    for (int j = 0; j < n; j++)
    {
            if (matriz[i][j] > mayor)
            {
                mayor = matriz [j][i];
                posG = posP[j]; // Para saber la posición del partido ganador de la ciudad.
            }
    
    }
    cout << Politicos[posG - 1] << endl; 
    
}
getch();

    
    return EXIT_SUCCESS;
}