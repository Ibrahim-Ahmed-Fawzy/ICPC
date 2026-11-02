#include <iostream>
using namespace std;

int main (){
    int x, y;
    char s;
    cin >> x >> s >> y;

    if (s == '<')
    {
        if (x < y)
        {
            cout << "Right";
            return 0;
        }
    }
    else if (s == '>')
    {
        if (x > y)
        {
            cout << "Right";
            return 0;
        }
    }
    else if (s == '=')
    {
        if (x == y)
        {
            cout << "Right";
            return 0;
        }
    }
    else
    {
        return 0;
    }

    cout << "Wrong";
}