#include<iostream>
using namespace std;
int main()
{
    int n,result=0;
    cout<<"Enter a number n =";
    cin >> n;
    if(n<=1)
    {
        cout<<"This is not a prime number";
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            result=1;
            break;
        }
    }
    if(result==0)
    {
       cout<<"This is a prime number";  
    }
    else
    {
        cout<<"This is not a prime number";
    }
    return 0;
}