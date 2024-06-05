#include <iostream>
using namespace std;

int main()
{

    int row, col, n;
    cout << "enter the value of n" << endl;
    cin >> n;

    // int count = 1;
    row = 1;

    while (row <= n)
    {

        col = 1;
        int space = n - row;
        while (space >= 0)
        {
            cout << " ";
            space = space - 1;
        }

        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;

        row = row + 1;
    }
}