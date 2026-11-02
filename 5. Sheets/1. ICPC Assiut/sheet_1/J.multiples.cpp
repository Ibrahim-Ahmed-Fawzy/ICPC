#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if (x > y)
    {
        if (((x / y) * y == x))
        {
            cout << "Multiples";
        }
        else
        {
            cout << "No Multiples";
        }
    }
    else
    {
        if (((y / x) * x) == y)
        {
            cout << "Multiples";
        }
        else
        {
            cout << "No Multiples";
        }
    }
}