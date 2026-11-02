#include <iostream>
using namespace std;

int main (){
    int x[3], temp;
    cin >> x[0] >> x[1] >> x[2];
    int y[3] = {x[0], x[1], x[2]};

    for (int i = 0; i <= 2; i++)
    {
        for (int j = i+1; j <= 2; j++)
        {
            if (y[i] < y[j])
            {
                temp = y[i];
                y[i] = y[j];
                y[j] = temp;
            }
        }
    }

    cout << y[2] << endl << y[1] << endl << y[0] << endl;    
    cout << endl << x[0] << endl << x[1] << endl << x[2];
}