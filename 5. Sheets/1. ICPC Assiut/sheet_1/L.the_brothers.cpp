#include <iostream>
using namespace std;

int main(){
    string name_1[2], name_2[2];
    int i = 0;

    cin >> name_1[0] >> name_1[1];
    cin >> name_2[0] >> name_2[1];

    while (name_1[1][i] != '\0')
    {
        if (name_1[1][i] != name_2[1][i])
        {
            cout << "NOT";
            return 0;
        }
        else
        {
            i++;
        }
    }

    cout << "ARE Brothers";
}