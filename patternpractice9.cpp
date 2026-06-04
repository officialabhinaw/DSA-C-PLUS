
// for this type of patterns
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
 for(int i=1;i<=n;i++)
 {
     for(int j=1;j<=i;j++)
     {
         cout<<ch<<" ";
        ch++;
     }
    cout<<"\n"; 
 }
 return 0;
}