// Enter data from keyboard in two dimentional array and print sum of each row in nthe following format
// sum of row 1 =
// sum of row 2 =
// sum of row 3 =

#include <iostream>
using namespace std;
int main()
{
    int arr[3][3], sum = 0, arr2[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter a number" << endl;
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        arr2[i] = sum;
        sum = 0;
    }
    for (int i = 0; i < 3; i++)
        cout << "sum of row " << i + 1 << " = " << arr2[i] << endl;
    return 0;
}