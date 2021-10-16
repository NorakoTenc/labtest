#include <iostream>
#include <iomanip>
#include "windows.h"
#define _USE_MATH_DEFINES 
#include "math.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double  r, y;
    int k,s;
    cout << "Уведіть r ";
    cin >> r;
    for (s=0, k = 1; k < 11; k++)
    {
        s = s + k;
    }
    y = (sin(s * M_PI / 180.)+pow(r, 2.))/(pow(r,2.)+2);
    cout << "Y = " << y << endl;

}