// hollow pyramidal
//Enter a number n= 4
/*   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/
// n-2 sa lisliya start kiya taki middle row copy na ho
#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    cout<<"Enter a number n= ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=0)
        {
        for(j=0;j<2*i-1;j++)
        {
          cout<<" ";  
        }
       cout<<"*";
        }
        cout<<endl;
        
    }
     for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=0)
        {
        for(j=0;j<2*i-1;j++)
        {
          cout<<" ";  
        }
       cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;

}