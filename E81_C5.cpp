#include <iostream>

/*
*   Problema 81 del capitulo 5
*   
*   Problema a resolver:
*   Encontrar el promedio de una lista de números diferentes de cero e impirmir
*   enseguida las siguientes cuatro cantidades: el promedio, el número de esos números
*   que exceda al promedio, el número de ellos que sea igual y el número que sea menor 
*   que él.
*/

//@Author   Luis Carlos Garcia Pedraza 19211645
//@Date     23 de marzo del 2022


using namespace std;

int main(){
    //Declaración de variables
    int n = 50;
    int arr[n]; 
    int suma = 0; 
    int promedio;
    int sizeArr;
    int difZ = 0;
    int mayor = 0, eq = 0, menor = 0;

    sizeArr = sizeof(arr) / sizeof(arr[0]); //tamaño del array

    //búcle para asignar un valor aleatorio al array
    for(int i = 0; i < n; i++){
        difZ = rand() % 100;

        //condición para que los valores no sean iguales a 0
        if(difZ > 0){
            arr[i] = difZ;
        }
        
        suma = suma + arr[i]; //sumamos los valores que se vayan agregando al array
        

    }

    //mostramos los datos
    for (int a = 1; a < n+1; a++)
    {
        cout << a <<". " << arr[a-1] << endl;
    }


    promedio = suma / sizeArr; //operacion para sacar el promedio

    //validamos que los valores cumplan la condición que se estableció en el problema
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > promedio){
            mayor++;
        }
        else if(arr[i] == promedio){
            eq++;
        }
        else if(arr[i] < promedio){
            menor++;
        }
    }

    //Mostramos cada uno de los datos
    cout << endl;
    cout << "Promedio del conjunto de números: " << promedio << endl;
    cout << "Número de números que son mayores al promedio: "<< mayor << endl;
    cout << "Número de números que son iguales al promedio: "<< eq << endl;
    cout << "Número de números que son menores al promedio: "<< menor << endl;
    return 0;
}