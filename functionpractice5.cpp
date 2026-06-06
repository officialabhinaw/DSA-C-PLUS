/*
Enter a number=143
The sum of number=8
*/
#include<iostream>
using namespace std;

 int sumNUM(int n)
 {
     int sum=0;
     int reminder;
     while(n>0)
     {
         reminder=n%10;
         n=n/10;
         sum=sum+reminder;
     }
     return sum;
 }
 int main()
 {
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"The sum of number="<<sumNUM(n)<<endl;
    return 0;
 }