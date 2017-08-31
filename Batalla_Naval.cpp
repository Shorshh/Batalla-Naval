#include <iostream>

using namespace std;

 struct Tablero
{
    int casillero;
    int* fila;
    int** columna;
};

Tablero creartablero ();
void mostrartablero (Tablero T_Naval);

int main()
{
    Tablero tablero = creartablero();
    mostrartablero(tablero);
    return 0;
}

Tablero creartablero ()
// Se crea el tablero y se asigna un valor "0" a cada casillero
{
    Tablero T_Naval;

    T_Naval.columna = new int*[11];

    for(int i = 0 ; i < 11 ; i++)
    {
        T_Naval.columna[i] = T_Naval.fila = new int [11];
        for (int j = 0 ; j < 11 ; j++)
        {
            T_Naval.columna[i][j] = 0;
        }
    }
    return T_Naval;
}

void mostrartablero (Tablero T_Naval)
//Muestra en pantalla el tablero en el estado deseado
{
   for (int i = 0 ; i < 11 ; i++){
        for (int j = 0 ; j < 11 ; j++){
            cout << T_Naval.columna[i][j]  << ':';
        }
        cout << endl;
   }
}
