#include <iostream>
#include <cstdlib> //libreria que nos permite usar la funcion rand() para generar numeros aleatorios

/*
*   Problema 79 del capitulo 5
*   
*   Problema a resolver:
*   Encontrar el promedio de 1,000 números tomados al azar.
*/

//@Author   Luis Carlos Garcia Pedraza 19211645
//@Date     23 de marzo del 2022

using namespace std;

int main()
{   
    //declaracion de varaibles
    int numAleatorios[1000];   
    int suma = 0;
    int media = 0;
    int sizeArr = 0;

    sizeArr = sizeof(numAleatorios) / sizeof(numAleatorios[0]);//tamaño del array

    for(int i = 0; i < sizeArr; i++)
    {
        numAleatorios[i] = rand();//guardamos cada valor en su posicion
        suma = suma + numAleatorios[i];
    }

    //Mostramos todos los numeros que se generaron aleatoriamente.
    for(int i = 0; i < sizeArr; i++)
    {
        cout << i+1 << ". " << numAleatorios[i] << endl;
    }
    
    media = suma / sizeArr;//operacion para obtener la media.

    cout<<"\nLa media del conjunto de valores es: "<<media; //mostramos los datos
}