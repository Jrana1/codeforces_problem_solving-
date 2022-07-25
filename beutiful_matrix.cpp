#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int mat[5][5];
    // int x;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // cin>>x;
            cin >> mat[i][j];
        }
    }

    int i, j;
    int flag = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (mat[i][j] == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    int res = (abs(i + 1 - 3)) + abs((j + 1 - 3));
    cout << res << endl;
    return 0;
}