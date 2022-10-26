#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number" << endl;
        cin >> arr[i];
        if (arr[i] % 2 != 0)
            cout << "ODD Number = " << arr[i] << endl;
    }
    return 0;
}