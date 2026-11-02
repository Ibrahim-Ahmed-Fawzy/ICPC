#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, c;
    long long b, d;
    cin >> a >> b >> c >> d;

    if (b * logl(a) > d * logl(c))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}