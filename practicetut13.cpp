// vote eligibility check
#include<iostream>
using namespace std;
int main()
{ 
 int n;
    cout<<"Enter a age =";
    cin>>n;
    if(n<18)
    {
        cout<<"not eligible for vote";
    }
    else
    {
        cout<<" eligible for vote";
    }
    return 0;   
}