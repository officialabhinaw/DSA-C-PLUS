#include<iostream>
#include<climits>
using namespace std;
int reversearray (int size,int array[])
{
    int start=0,end=size-1;
    while(start<end)
    {
        swap(array[start],array[end]);
            start++;
            end--;
    }
    return 0;
}
int main()
{
int num[]={22,66,44,55,44,88,77,56,66,99,11,2,3,5,55,7,55};
//int size=8;// this is realin
// for auto feeded number;
int size= sizeof(num)/sizeof(num[0]);
reversearray(size,num);
for(int i=0;i<size;i++)
{
   cout<<num[i]<<' ';
}
   cout<<endl;
    return 0;
}
