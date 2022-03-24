#include <iostream>

/*
*   Problema 83 del capitulo 5
*   
*   Problema a resolver:
*   La familia Wilson salió de vacaciones la semana pasada.
*   Recorrió 440 km el lunes, 0 el martes, 100 el miércoles,
*   320 el jueves y 40 el viernes. Determinar la distancia
*   viajada en promedio diario.
*/

//@Author   Luis Carlos Garcia Pedraza 19211645
//@Date     23 de marzo del 2022

using namespace std;

int main(){
    //Declaracion de variables
    int suma = 0;
    int promedio;
    string dias[] = {"lunes","martes", "miércoles", "jueves", "viernes"} ;
    int distancia[] = {440, 0, 100, 320, 40};
    int sizeArray = sizeof(dias) / sizeof(dias[0]);

    //mostramos los datos al principio y hacemos la sumatoria
    for(int i = 0; i < sizeArray; i++){
        cout << dias[i] << ": " << distancia[i] << "km" << endl;
        suma = suma + distancia[i];    
    }

    promedio = suma / sizeArray;    //operacion para obtener el promedio  
    
    cout << "El promedio de la distancia reccorida es: " << promedio << "km";   //mostramos los datos


    return 0;
}