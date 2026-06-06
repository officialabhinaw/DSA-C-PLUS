#include<iostream>
using namespace std;

int checkprime(int n)
{
    if(n==1)
        return 0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    if(checkprime(n)==1)
        cout<<n<<" is a Prime number"<<endl;
    else
        cout<<n<<" is NOT a Prime number"<<endl;
    return 0;
}