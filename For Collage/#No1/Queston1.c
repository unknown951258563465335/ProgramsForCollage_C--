// Write a program that reads 9 elements in 2d array and calculate the sum and print the result

#include <iostream>
using namespace std;
int main()
{
    int arr[3][3], sum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter a number" << endl;
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    cout << sum;
    return 0;
}