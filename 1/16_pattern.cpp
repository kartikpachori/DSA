#include <iostream>
using namespace std;

int main()
{

    int row, col, n;
    cout << "enter the value of n" << endl;
    cin >> n;

    // int count = 1;
    row = 1;
    char value = 'A';
    while (row <= n)
    {

        col = 1;
        while (col <= row)
        {

            cout << value << " ";

            col = col + 1;
            value = value + 1;
        }
        cout << endl;

        row = row + 1;
    }
}