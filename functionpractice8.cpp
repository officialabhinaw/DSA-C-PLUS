//BOOL IS REPLACEMENT OF INT
// BOOL CONTAIN 1 BYTES
#include<iostream>
using namespace std;
bool checkdivisor(int n ,int d)
{
    if(d*d>n) return 1;// 1=prime
    if(n%d==0) return 0;// is not prime
    return checkdivisor (n,d+1);
}
bool isprime(int n)
{
 if(n<2) return 0;
 if(n==2) return 1;
 return checkdivisor(n,2);
}
void printprimes(int n,int current)
{
    if(current>n) return;
    if(isprime(current)==1)
    cout<<current<<" ";
    printprimes(n,current+1);
}
int main()
{
   int n;
   cout<<"Enter a number =";
   cin>>n;
   cout<<"Printprime numbrer upto n: ="<<n<<":"<<endl;
   printprimes(n , 1);
   cout<<endl; 
   return 0;
}


 