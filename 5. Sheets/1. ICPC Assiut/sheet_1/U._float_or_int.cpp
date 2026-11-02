#include <iostream>
#include<iomanip>
using namespace std;

int main (){
    cout << fixed << setprecision(3);

    float x, decimal;
    int y;
    cin >> x;

    y = x;
    decimal = x - y;


    if (decimal == 0)
    {
        cout << "int " << y;
    }
    else
    {
        cout << "float " << y << " " << decimal;
    }
}