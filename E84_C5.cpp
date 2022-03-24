#include <iostream>
#include <bits/stdc++.h>

/*
*   Problema 84 del capitulo 5
*   
*   Problema a resolver:
*   Encontrar la desviación normal para un conjunto de datos.
*   Usar el siguiente conjunt ode datos en el programa: 220, 180,
*   275, 200, 240, 215, 208, 197, 223, 189 y 218.
*/

//@Author   Luis Carlos Garcia Pedraza 19211645
//@Date     23 de marzo del 2022

using namespace std;

int main(){
    //declaracion de variables
    double arr[] = {220, 180, 275, 200, 240, 215, 208, 197, 223, 189, 218};
    int sumaSumatoria = 0;
    double media = 0;
    int suma = 0;
    double desviacion_estandar = 0;
    double desviacion_normal = 0;
    int sizeArr = 0;
    double varianza = 0;
    double resta = 0;

    sizeArr = sizeof(arr) / sizeof(arr[0]); //tamaño del array

    int sumatoria[sizeArr];

    //usamos un búcle para realizar la sumatoria de los elementos del array
    for(int i = 0; i < sizeArr; i++){
        suma = suma + arr[i];
    }

    media = suma / sizeArr;     //obtenemos la media

    //Búcle para realizar las operaciones indicadas
    for(int i = 0; i < sizeArr; i++){
        resta = arr[i] - media;
        sumatoria[i] = pow(resta, 2);
        sumaSumatoria = sumaSumatoria + sumatoria[i];
    }

    //realizamos las siguientes operaciones
    varianza = sumaSumatoria / (sizeArr - 1);
    desviacion_estandar = sqrt(varianza);
    desviacion_normal = (arr[7] - media) / desviacion_estandar;

    //mostramos los datos
    cout << "La desviacion normal es: " << desviacion_normal << " para un valor x1 = " << arr[7];
    
    
}