//*
//* *
//* * *
//* * * *
// for this type of patterns
// for this type i always 
// 1
// 2 2 
// 3 3 3 
// 4 4 4 4 
// for this type j always 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
#include<iostream>
using namespace std;
  int main()
{
 int n;
 cout<<"Enter a number n=";
 cin>>n;

 for(int i=1;i<=n;i++)
 {
     for(int j=1;j<=i;j++)
     {
         cout<<i<<" ";
     }
    cout<<"\n"; 
 }
 return 0;
}