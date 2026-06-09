#include<iostream>
using namespace std;
int bintodec (int binNUM)
{
 int ans=0,p=1;
 while(binNUM>0)
 {
 int rem=binNUM%2;
 binNUM/=10;
 ans +=(rem * p);
 p*=2;
 }
 return ans;
}
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<bintodec(n)<<endl;
    return 0;
}