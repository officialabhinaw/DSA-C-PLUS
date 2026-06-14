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

int size=sizeof(num)/sizeof(num[0]);
int target;
cout<<"Enter a number :";
cin>>target;
int result=linearsearch(size,target,num);
if(result==-1)
{
    cout<<"Number not found"<<endl;
}
else
{
    cout<<"target"<<target<<" found at index "<<result<<endl;
}
return 0;
}
