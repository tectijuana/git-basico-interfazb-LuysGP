#include <iostream>

using namespace std;

int tablaMultiplicar(int n){
    int operacion;
    for(int i = 1; i <= 10; i++)
    {
        operacion = n * i;
        cout << n << " x " << i << " = " << operacion << endl;
    }


}
int main()
{
    int M[]= {2,3,4,5,6,7,8,9,10};
    int sizeArr;
    sizeArr = sizeof(M) / sizeof(M[0]);
    for(int i = 0; i < sizeArr; i++)
    {
        if(M[i] == i+2)
        {
            cout << endl;
            cout << "Tabla de multiplicar del: " << i+2 << endl << endl;
            tablaMultiplicar(M[i]);
        }
    }

    return 0;
}