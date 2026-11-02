#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(9);

    double b, x, r;
    b = 3.141592653;

    cin >> r;
    
    x = b*r*r;
    cout << x;

}