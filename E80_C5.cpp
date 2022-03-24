#include <iostream>


/*
*   Problema 80 del capitulo 5
*   
*   Problema a resolver:
*   La clase de Ecología tiene cinco estudaintes que obtuvieron las
*   siguientes notas en el examen final: 75, 93, 41, 98 y 71. El profesor
*   desea calcular el promedio de las notas. Escribir un programa para
*   realizar el cálculo.
*/

//@Author   Luis Carlos Garcia Pedraza 19211645
//@Date     23 de marzo del 2022

using namespace std;

int main()
{
    //declaración de variables
    double numAleatorios[] = {75, 93, 41, 98, 71};
    double suma = 0;
    double media = 0;
    int sizeArr = 0;

    sizeArr = sizeof(numAleatorios) / sizeof(numAleatorios[0]);//tamaño del array

    //sumamos cada uno de los elementos del array
    for(int i = 0; i < sizeArr; i++)
    {
        suma = suma + numAleatorios[i];
    }
    cout<<"Las calificaciones del examen de ecologia son:" << endl;
    
    //Mostramos todos los numeros.
    for(int i = 0; i < sizeArr; i++)
    {
        cout << i+1 << ". " << numAleatorios[i] << endl;
    }
    
    media = suma / sizeArr;//operacion para obtener la media.

    cout<<"\nLa media del conjunto de valores es: "<<media; //mostramos el resultado
}