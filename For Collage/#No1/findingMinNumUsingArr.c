#include <iostream>
using namespace std;
int main()
{
    int arr[3], min;
    cout << "Enter a Number" << endl;
    cin >> arr[0];
    min = arr[0];
    for (int i = 1; i < 3; i++)
    {
        cout << "Enter a Number" << endl;
        cin >> arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Maximum Number is = " << min;
    return 0;
}