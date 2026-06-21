#include <iostream>
#include<climits>
using namespace std;

int main()
{
    
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int maxSum=INT_MIN;
     int arr[n];
    cout<<"Enter a element\n";
    for(int j=0;j<n;j++)
    {
        cout<<"arr["<<j<<"]=";
        cin>>arr[j];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int st=0;st<n;st++)
    {
        int  currentsum=0;
        for(int end=st;end<n;end++)
        {
         currentsum+=arr[end]; 
         maxSum=max(currentsum,maxSum);
        }
    }
        cout<<"maxsum"<<maxSum<<endl;
    
    return 0;
}
