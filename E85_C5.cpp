#include <iostream>
#include <bits/stdc++.h>

/*
*   Problema 85 del capitulo 5
*   
*   Problema a resolver:
*   Disponer los números 93, 81, 97, 75, 69, 92 en
*   orden descendente y calcular su media, la suma
*   de las desviaciones al cuadrado, la varianza y 
*   la desviación normal.
*/

//@Author   Luis Carlos Garcia Pedraza 19211645
//@Date     23 de marzo del 2022


using namespace std;

int main(){

    //Decalaracion de variables
    double arr[] = {93, 81, 97, 75, 69, 92};
    int sizArr = 0;
    double arrDes[sizArr];
    double sumatoria[sizArr];
    double sumaSumatoria = 0;
    double suma = 0;
    double media = 0;
    double mediana = 0,varianza = 0, desv2 = 0, resta = 0, desv_norm = 0;

    sizArr = sizeof(arr)/sizeof(arr[0]);    //tamaño del array

    sort(arr, arr + sizArr);    //ordenamos el array

    int contDes = sizArr;       //inicializamos un contador

    //Búcle for para agregar elementos a un array en forma descendente y realizar las sumas de sus elementos
    for(int i = 0; i < sizArr; i++){
        contDes--;
        arrDes[contDes] = arr[i];
        suma = suma + arr[i];
    }

    //Mostramos los datos
    for(int i = 0; i < sizArr; i++){
        cout << i+1 <<". " << arr[i] << " - " << arrDes[i] << endl;
    }

    media = suma / sizArr;  //Media del array


    //realizamos las operaciones correspondientes
    for(int i = 0; i < sizArr; i++){
        resta = arr[i] - media;
        sumatoria[i] = pow(resta, 2);
        sumaSumatoria = sumaSumatoria + sumatoria[i];
    }

    varianza = sumaSumatoria / (sizArr - 1);
    desv2 = sqrt(varianza);
    desv_norm = (arr[0] - media) / desv2;


    //Mostramos los datos
    cout << "La varianza es: " << varianza << endl;
    cout << "La desviacion estandar es: " << desv2 << endl;    
    cout << "La desviacion normal es: " << desv_norm << " para un valor x1 = " << arr[0];

    return 0; 
}