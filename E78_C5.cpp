#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double firstDay_year[] = {1000, 1040, 1081.60, 1124.86};
    int sizeArr;
    double media = 0;
    double suma = 0;

    sizeArr = sizeof(firstDay_year) / sizeof(firstDay_year[0]);

    for(int i = 0; i < sizeArr; i++)
    {
        suma = suma + firstDay_year[i];
    }

    media = suma / sizeArr;

    cout << "El promedio de la inversión por año es: " << media;
}