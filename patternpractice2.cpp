// it is sqare pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number n=";
    cin>>n;
     for(int i=1;i<=n;i++)  
    {
      for(int j=1;j<=n;j++) 
      {
          // cout<<" * ";  // this for star pattern
          cout<< j<<"";   //this id for number
      }
      cout<<"\n";
    }
    cout<<endl;
    return 0;
    
}
//for this type pattern
//1 2 3 4
//1 2 3 4
//1 2 3 4
//1 2 3 4