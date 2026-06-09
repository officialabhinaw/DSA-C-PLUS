#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return  fib(n-1)+fib(n-2);
}
void printfib(int current,int n)
{
    if(current>n) return;
    cout<<fib(current)<<" ";
    printfib(current+1,n);
}
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"fibonic series"<<endl;
    printfib(0,n-1);
    cout<<endl;
    return 0;
}