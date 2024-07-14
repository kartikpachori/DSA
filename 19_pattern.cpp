#include <iostream>
using namespace std;

int main()
{

    int row, col, n;
    cout << "enter the value of n" << endl;
    cin >> n;

    row = 1;

    while (row <= n)
    {

        col = 1;
        int space = n - row;
        int start = row - 1;

        while (space >= 0)
        {
            cout << " ";
            space = space - 1;
        }

        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }

        while (start)
        {
            cout << start;
            start = start - 1;
        }

        cout << endl;

        row = row + 1;
    }
}