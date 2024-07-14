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
        while (col <= n)
        {
            char value = 'A' + row + col - 2;
            cout << value << " ";

            col = col + 1;
        }
        cout << endl;

        row = row + 1;
    }
}