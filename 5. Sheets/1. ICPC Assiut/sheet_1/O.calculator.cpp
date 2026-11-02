#include <iostream>
using namespace std;

int main(){
    int x, y;
    char b;
    cin >> x >> b >> y;

    if (b == '+')
    {
        cout << x + y;
    }
    else if (b == '-')
    {
        cout << x - y;
    }
    else if (b == '*')
    {
        cout << x * y;
    }
    else if (b == '/')
    {
        cout << x / y;
    }
}