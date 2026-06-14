// IT WAS FOR PRESSONAL USE

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
int num[]={2208, 2405, 695, 508, 10750, 1960, 6560, 2380, 1150, 14580, 5360, 10280, 2320, 2360, 3780, 2790, 2880, 2440, 13850, 2590, 1890, 2720, 2280, 2080, 3680, 1695, 2735, 32650, 2620, 1520, 2650, 8535, 2835, 2320, 2150, 2480, 2380, 3450, 2730, 3180, 2830, 2505, 680, 3380, 2480, 2305, 2480, 2480, 2380, 2320, 2390, 4190, 3020, 2850, 3520, 3060, 6720, 18995, 3205, 7160};

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
