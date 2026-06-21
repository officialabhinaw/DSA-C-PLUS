// kadna ma always 1 loop hota hai


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
    
        int  currentsum=0;
        for(int i=0;i<n;i++)
        {
         currentsum+=arr[i]; 
         maxSum=max(currentsum,maxSum);
         if(currentsum<0)currentsum=0;
        }
        cout<<"maxsum"<<maxSum<<endl;
    
    return 0;
}
