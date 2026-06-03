//sum of all number whose divisible by 3
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    int sum = 0;
    cout << "Enter a number=";
    cin >> n;
    while (i <= n)
    {
        if (i % 3 == 0)
        {

            sum = sum + i;
        }
        i++;
    }
    cout << "The sum of divisible by " << sum << endl;
    return 0;
}