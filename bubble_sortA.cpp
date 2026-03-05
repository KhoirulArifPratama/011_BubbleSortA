#include <iostream>
#include <string>
using namespace std; // Library

int qarr[20]; // Deklarasi Variabel global
int n;

void input()
{
    int d; // Procedure input
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if (n <= 20)
            break;
        else
        {
            cout << "Error! number should be in range of 1-20." << endl;
        }
    }

    cout << endl;
    cout << "-------------------" << endl;
    cout << "Enter Array Element" << endl;
    cout << "-------------------" << endl;
}