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
        while (col <= row)
        {
            cout << row << " ";

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}