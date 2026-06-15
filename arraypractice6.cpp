#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter a number";
  cin>>n;
  if(n<=0)
  {
      cout<<"Invalid inputs";
      return 0;
  }
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cout<<"Enter a element"<<i+1<<" : ";
      cin>>arr[i];
  }
      int maxVal=arr[0],minVal=arr[0];
      int maxIdx=0,minIdx=0;
      for(int i=0;i<n;i++)
      {
          if(arr[i]>maxVal)
          {
              maxVal=arr[i];
              maxIdx=i;
          }
          if(arr[i]<minVal)
          {
             minVal=arr[i];
              minIdx=i;  
          }
      }
      //swap karo
      int temp=arr[maxIdx];
      arr[maxIdx]=arr[minIdx];
      arr[minIdx]=temp;
      cout<<"array after swaping max and min ";
      for(int i=0 ;i<n;i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;
      return 0;
      
}