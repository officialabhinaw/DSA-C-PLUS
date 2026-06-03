//sum all odd number uptto number
#include<iostream>
using namespace std;
int main()
{
    int n;
    int oddsum=0;
    cout<<"Enter a number n=";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2 != 0)
        {
          oddsum+=i;
        }
    }
    cout<<"The odd sum="<<oddsum<<endl;
    return 0;
}