#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//función para mostrar el conjunto de datos y su moda
void MostrarModa(int valor, int rep){
    cout << "La moda en el array es " << valor << ", se repitió " << rep << " veces.";
}

//función que retorna las veces que se ha repetido un mismo numero dentro de un conjunto de valores
int Verifica(int num, int arr[], int sizeArr){
    int x = 0;

    for(int i = 0; i < sizeArr; i++)
    {
        if(num == arr[i]){
            x++;
        }
    }

    return x;
}

void Moda(int sizeArr, int arr[]){
    int num = 0, valor = 0, rep = 0; //declaración de variables

    //ciclo for para iterar el arreglo de numeros
    for(int i = 0; i < sizeArr; i++)
    {
        num = arr[i];   //guardamos en una variable num el valor del indice

        //creamos una condición donde indicaremos si el valor del metodo a retornar es mayor o igual al numero de repeticiones del numero
        //si se cumple la condicion hara lo siguiente
        if(rep <= Verifica(num, arr, sizeArr))
        {
            rep = Verifica(num, arr, sizeArr); //guardara en una variable el numero de veces que se ha repetido
            valor = arr[i];     //aqui guardara el valor que se ha repetido esas veces
        }
    }
    MostrarModa(valor, rep);    //llamaremos a esta funcion para mostrar los datos
}


int main()
{   
    /*
    Problema a resolver:
    La media aritmética es la suma de todos los valores dividida entre el número de valores.
    La mediana es el valor de en medio. La mitad de los valores es mayor que la mediana y 
    la mitad de ellos, menor. La moda es el valor que ocurre con más frecuencia. Determinar
    la media, mediana y moda del siguiente conjunto de valores: 153, 158, 161, 157, 150, 153,
    149, 153, 155, 162.
    */
    
    
    //declaración de variables 
    int arr[] = {153, 158, 161, 157, 150, 153, 149, 153, 155, 162}; 
    int sumaArray = 0;
    int mediana = 0;
    int pivote = 0;
    int moda;
    int x = 0;
    int mitValor = 0;
    int twoValues = 0;

    int sizeArray = sizeof(arr) / sizeof(arr[0]);   //tamaño del arreglo

    //buclé para sumar cada uno de los valores del array
    for(int a = 0; a < sizeArray; a++)
    {
        sumaArray = sumaArray + arr[a];
    }

    int media = sumaArray / sizeArray; //Media del conjunto de valores
    
    sort(arr, arr + sizeArray);     //acomodamos los valores de menor a mayor
    cout << "Conjunto de valores: ";
    for(int i = 0; i < sizeArray; i++)
    {
        if(i < sizeArray - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i];
    }

    cout << "\nLa media en el array es: " << media;

    //Condicion para saber si el conjunto de valores es impar o par y proceder con la operación de acuerdo a la condición.
    if(sizeArray % 2 == 0)
    {
        mitValor = sizeArray / 2;
        twoValues = mitValor;
        mitValor -= 1;
        mediana = (arr[mitValor] + arr[twoValues] ) / 2;//Mediana del conjunto de valores.
        cout << "\nLa mediana en el array es: " << mediana; //
    }
    else
    {
        mitValor = sizeArray / 2;
        mediana = arr[mitValor];//Mediana del conjunto de valores.
        cout << "\nLa mediana en el array es: " << mediana;
    }

    cout << endl;
    Moda(sizeArray, arr);
    
}
