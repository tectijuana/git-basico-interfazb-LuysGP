#include <iostream>
#include <bits/stdc++.h>

/*
*   Problema 82 del capitulo 5
*   
*   Problema a resolver:
*   Se registraron las siguientes calificaciones en un examne de admisión en
*   Matemáticas:    83, 74, 69, 100, 92, 
*                   95, 89, 75, 92, 82,
*                   85, 97, 74, 91, 78,
*                   83, 61, 100, 93, 54,
*                   87, 82, 79, 68, 72,
*                   75, 86, 92, 53, 100,
*                   99, 67, 97, 79, 82,
*                   81, 85, 98, 99.
*   Determinar e imprimir la mediana de las calificaciones. Imprimir también
*   las calificaciones en orden descendente.
*/

//@Author   Luis Carlos Garcia Pedraza 19211645
//@Date     23 de marzo del 2022

using namespace std;

int main(){
    //Declaraciones de variables
    int arr[] = {
        83, 74, 69, 100, 92, 
        95, 89, 75, 92, 82,
        85, 97, 74, 91, 78,
        83, 61, 100, 93, 54,
        87, 82, 79, 68, 72,
        75, 86, 92, 53, 100,
        99, 67, 97, 79, 82,
        81, 85, 98, 99};

    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int n = sizeArr - 1;
    int descendenteArr[sizeArr];
    int mitValor;
    int twoValue;
    int mediana;
    
    //Mostramos los datos originales
    for(int a = 1; a < sizeArr + 1; a++){
        cout << a << ". " << arr[a-1] << endl;
    }    

    sort(arr, arr + sizeArr);   //Primero los acomodamos de mayor a menor

    //Usamos un búcle para agregarlos a un array de forma descendente
    for(int i = 0; i < sizeArr; i++){
        descendenteArr[n] = arr[i];
        n--;
    }

    //Sacamos la mediana del array
    if(sizeArr % 2 == 0){
        mitValor = sizeArr / 2;
        twoValue = mitValor;
        mitValor -=1;
        mediana = (arr[mitValor] + arr[twoValue]) / 2;
        cout << "\nLa mediana en el array es: " << mediana;

    }
    else{
        mitValor = sizeArr / 2;
        mediana = arr[mitValor];//Mediana del conjunto de valores.
        cout << "\nLa mediana en el array es: " << mediana;
    }

    //Mostramos los datos 
    cout << endl;
    cout << endl;
    cout << "Array de forma descendente.\n";
    for(int a = 1; a < sizeArr + 1; a++){
        cout << a << ". " << descendenteArr[a-1] << endl;
    }

    return 0;
}