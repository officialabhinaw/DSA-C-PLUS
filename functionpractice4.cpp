// ADD OF TWO NUMBER BY USING FUNCTION
#include<iostream>
using namespace std;
int fac(int n)
{
int fac=1;
  for(int i=1;i<=n;i++)
{ 
  fac=fac*i; 
}
 return fac;
 }
int main()
{
    int n;
    cout<<"Enter a number n=";
    cin>>n;
    cout<<"factorial n ="<<fac(n)<<endl;
    return 0;
}
