#include <iostream>
using namespace std;
int main()
{
    int n1, n2, sum;
    char ch;
    do
    {
        cout << "\nEnter Two Numbers" << endl;
        cin >> n1 >> n2;
        sum = n1 + n2;
        cout << "Sum = " << sum << endl;
        cout << "Do you want to continue (y/n)";
        cin >> ch;
    } while (ch != 'n');
    return 0;
}