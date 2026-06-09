#include<iostream>
using namespace std;
int dectobinary (int decNUM)
{
 int ans=0,p=1;
 while(decNUM>0)
 {
 int rem=decNUM%2;
 decNUM/=2;
 ans +=(rem * p);
 p*=10;
 }
 return ans;
}
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<dectobinary(n)<<endl;
    return 0;
}