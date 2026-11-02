#include <iostream>
#include<iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(0);

    float x, y, decimal;
    int floor, ceil, round, divinision; 
    cin >> x >> y;

    divinision = x / y;
    decimal = (x / y) - divinision;

    cout << "floor " << x << " / " << y << " = " << divinision << endl;
    if (decimal == 0)
    {
        cout << "ceil " << x << " / " << y << " = " << divinision << endl;
        cout << "round " << x << " / " << y << " = " << divinision << endl;
    }
    else if (decimal >= 0.5)
    {
        cout << "ceil " << x << " / " << y << " = " << divinision + 1 << endl;
        cout << "round " << x << " / " << y << " = " << divinision + 1 << endl;
    }
    else
    {
        cout << "ceil " << x << " / " << y << " = " << divinision + 1 << endl;
        cout << "round " << x << " / " << y << " = " << divinision << endl;
    }
}