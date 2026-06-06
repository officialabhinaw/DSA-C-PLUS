// ADD OF TWO NUMBER BY USING FUNCTION
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int result =a+b;
    return result;
}
int main()
{
    int a,b;
    cout<<"Enter a number a=";
    cin>>a;
     cout<<"Enter a number b=";
    cin>>b;
    cout<<"sum of number="<<sum(a,b)<<endl;
    return 0;
}
