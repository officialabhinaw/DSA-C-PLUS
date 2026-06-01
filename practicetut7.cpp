// calculate simple intrest
#include<iostream>
using namespace std;
int main()
{
   int p,r,t,si;
   cout<<"Enter the principal amount=";
   cin>>p;
   cout<<"Enter the rate=";
   cin>>r;
   cout<<"Enter the time per year=";
   cin>>t;
   si=(p*r*t)/100;
   cout<<"Simple intrest= "<<si<<endl;
   return 0;
}