#include <iostream>
using namespace std;

int main()
{

    int row, col, n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int count = 1;
    row = 1;
    while (row <= n)
    {
        int value = row;
        col = 1;
        while (col <= row)
        {
            cout << value << "%";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}