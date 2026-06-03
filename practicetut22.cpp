//sum all odd number uptto number
#include<iostream>
using namespace std;
int main()
{
    int n;
    int evensum=0;
    cout<<"Enter a number n=";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2 == 0)
        {
          evensum+=i;
        }
    }
    cout<<"The even sum="<<evensum<<endl;
    return 0;
}