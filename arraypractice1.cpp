#include<iostream>
#include<climits>
using namespace std;
int main()
{
int num[]={22,66,44,55,44,88,77,56};
int smallest=INT_MAX;
int size=6;
for(int i=0;i<size;i++)
{
    if(num[i]<smallest)
    {
        smallest=num[i];
    }
}
    cout<<"smallest number is="<<smallest<<endl;
    return 0;
}
