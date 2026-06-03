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
           cout<<" * ";  // this for star pattern
          //cout<< i<<"";   this id for number
      }
      cout<<"\n";
    }
    cout<<endl;
    return 0;
    
}