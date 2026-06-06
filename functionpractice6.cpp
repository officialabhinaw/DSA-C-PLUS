// by using nCr farmula
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
 int nCr(int n,int r)
 {
     int fac_n=fac(n);
     int fac_r=fac(r);
     int fac_nmr=fac(n-r);
     return fac_n/(fac_r*fac(n-r));
 }
int main()
{
    int n,r;
    cout<<"Enter a number n=";
    cin>>n;
    cout<<"Enter a number r=";
    cin>>r;
    cout<<"factorial n ="<<nCr(n,r)<<endl;
    return 0;
}