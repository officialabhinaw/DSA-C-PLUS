#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0, pro = 1;
    cout << "Enter a number in array=";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid number";
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a Number" << i + 1 << " : ";
        cin >> arr[i];
        sum = sum + arr[i];
        pro = pro * arr[i];
    }
    cout << " Sum of number " << sum << endl;
    cout << "Product of number" << pro << endl;
    return 0;
}