#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 7, 9}, {3, 4, 10}, {11, 15, 16}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}