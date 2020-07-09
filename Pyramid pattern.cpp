#include <iostream>

using namespace std;

int main()
{
    int i, space, rows, k = 0, count = 0, count1 = 0;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; ++i)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            cout << "  ";
            ++count;
        }
        while (k != 2 * i - 1)
        {
            if (count <= rows - 1)
            {
                cout << i + k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << i + k - 2 * count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;
        cout << "\n";
    }
    return 0;
}
