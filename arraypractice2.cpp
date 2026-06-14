#include<iostream>
#include<climits>
using namespace std;
int linearsearch (int size,int target,int arr[])
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;// not found
}
int main()
{
int num[]={22,66,44,55,44,88,77,56};
int smallest=INT_MAX;
int size=6;
int target=77;
for(int i=0;i<size;i++)
{
    if(num[i]<smallest)
    {
        smallest=num[i];
    }
}
    cout<<"target number is="<<target<<endl;
    return 0;
}
