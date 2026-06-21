

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
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
        for(int end=st;end<n;end++)
        {
            for(int i=st;i<=end;i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
