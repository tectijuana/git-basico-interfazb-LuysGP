#include <iostream>

/*
*   Problema 78 del capitulo 6
*   
*   Problema a resolver:
*   Imprimir las primeras 20 filas de una tabla de acuerdo
*   a las siguientes reglas:
*       
*       1a. La tabla tendrá cuatro columnas rotuladas
*           con N,X,Y y Z.
*       2a. Los valores en la primera fila de la tabla
*           serán 1, 2, 3 y 4.
*       3a. Los valoresde N y Y serán dos unidades más grandes
*           que sus valores en la primera fila.
*       4a. Los valoresde X y Z serán cuatro unidades más grandes
*           que sus valores en la primera fila.
*/

//@Author   Luis Carlos Garcia Pedraza 19211645
//@Date     23 de marzo del 2022

using namespace std;

int main()
{
    int matriz[20][4] = {{1, 2, 3, 4},{}}; //Inicializamos la variable con la primera fila para poder realizar las operaciones
    int operation; //variable para poder realizar las operaciones
    int n1 = 4; //variable que ira cambiando dependiendo el caso, siguiente columna N y Y = +2, X y Z = +4;

    //Presentacion para el codigo
    cout << "#" << "   || " << "N " << "X " << "Y " << "Z";
    cout << endl;
    cout << "===================";
    cout << endl;
    cout << "1.  || ";

    //Impresion
    for(int b = 0; b < 4; b++)
    {
        cout << matriz[0][b] << " ";

    }

    //For para itearar las operaciones
    for(int r = 1; r < 20; r++)
    {
        cout << "\n";//salto de espacio

        //if solo de presentacion
        if(r < 9)
            cout << r+1 << ".  ||";
        else
            cout << r+1 << ". ||";

        //for que recorrera cada columna 
        for(int c = 0; c < 4; c++)
        {
            //dependiendo el caso se cambiara el valor
            if(n1 == 4)
                n1 = n1 - 2;
            else
                n1 = n1 + 2;
            
            //aqui se realizara la operacion que se requiere
            matriz[r][c] = matriz[r-1][c] + n1;

            cout << " " << matriz[r][c];//impresion de los datos
        }        
    }
    return 0;
}