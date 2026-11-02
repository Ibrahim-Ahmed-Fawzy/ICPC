#include <iostream>
using namespace std;

int main (){
    int a, b, c, d, sum;
    cin >> a >> b >> c >> d;
    sum = (a % 100) * (b % 100) * (c % 100) * (d % 100) % 100;

    if (sum < 10)
    {
        cout << "0";
    } 
    cout << sum;
}