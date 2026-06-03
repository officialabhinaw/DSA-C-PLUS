//sum all odd number uptto number
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    int oddsum=0;
    cout<<"Enter a number n=";
    cin>>n;
    while(i<=n)
    {
        if(i%2 != 0)
        {
          oddsum=oddsum+i;
        }
        i++;
    }
    cout<<"The odd sum="<<oddsum<<endl;
    return 0;
}