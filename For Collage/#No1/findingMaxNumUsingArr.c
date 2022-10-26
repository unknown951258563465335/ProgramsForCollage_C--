#include <iostream>
using namespace std;
int main()
{
    int arr[3], max = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a Number" << endl;
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Maximum Number is = " << max;
    return 0;
}