// factorial series
#include<iostream>
using namespace std;
int main()
{
    int n;
    long long fac=1;
    cout<<"Enter a number=";
    cin >> n;
    if(n<0)
    {
        cout<<"Factorial is not possible";
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    cout<<"factorial ="<<fac<<endl;
    return 0;
}