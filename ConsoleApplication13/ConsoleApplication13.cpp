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
    double  x, y;
    int k,s;
    cout << "Уведіть x ";
    cin >> x;
    for (s=0, k = 1; k < 11; k++)
    {
        s = s + k;
    }
    y = (sin(s * M_PI / 180.)+pow(x, 2.))/(pow(x,2.)+2);
    cout << "Y = " << y << endl;

}