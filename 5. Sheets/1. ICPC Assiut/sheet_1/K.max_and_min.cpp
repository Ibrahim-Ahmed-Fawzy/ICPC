#include <iostream>
using namespace std;

int main(){
    int x[3];
    cin >> x[0] >> x[1] >> x[2];
    int minimum = x[0]; int maximum = x[0];

    for (int i = 1; i <= 2; i++)
    {
        if (x[i] > maximum)
        {
            maximum = x[i];
        }
        else if (x[i] < minimum) 
        {
            minimum = x[i];
        }
    }

    cout << minimum << " " << maximum;
}