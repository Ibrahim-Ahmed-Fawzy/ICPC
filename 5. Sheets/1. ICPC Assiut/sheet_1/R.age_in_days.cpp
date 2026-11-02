#include <iostream>
using namespace std;

int main (){
    int x; int years = 0; int months = 0; int days = 0;
    cin >> x;

    while (x != 0)
    {
        if (x >= 365)
        {
            years++;
            x -= 365;
        }
        else if (x >= 30)
        {
            months++;
            x -= 30;
        }
        else
        {
            days++;
            x--;
        }
    }
    cout << years << " years\n" << months << " months\n" << days << " days\n";
}