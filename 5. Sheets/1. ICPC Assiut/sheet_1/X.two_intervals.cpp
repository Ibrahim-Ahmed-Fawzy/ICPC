#include <iostream>
using namespace std;

int main (){
    int x[2], y[2], start, end;
    cin >> x[0] >> x[1] >> y[0] >> y[1];
    
    x[0] >= y[0] ? start = x[0] : start = y[0];
    x[1] <= y[1] ? end = x[1] : end = y[1];

    bool b = start <= end;

    switch (b) {
        case 1:
            cout << start << " " << end;
            break;
        case 0:
            cout << "-1";
    }
}