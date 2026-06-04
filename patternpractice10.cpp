//Enter a number n=4
//A 
//B C 
//D E F 
//G H I J 
#include<iostream>
using namespace std;
  int main()
{
 int n;
 cout<<"Enter a number n=";
 cin>>n;
  char ch='A';
 for(int i=0;i<n;i++)
 {
     for(int j=i+1;j>0;j--)
     {
         cout<<ch<<" ";
        ch++;
     }
    cout<<"\n"; 
 }
 return 0;
}