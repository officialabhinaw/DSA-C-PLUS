#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number n=";
    cin>>n;
    if(n<18)
    {
        cout<<"Not eligible for driving license";
    }
    else
     {
        cout<<" eligible for driving license";
    }
    return 0;
}