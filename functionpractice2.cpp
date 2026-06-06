// ADD OF TWO NUMBER BY USING FUNCTION
#include<iostream>
using namespace std;
int minoftwo(int a,int b)

{ 
    if(a<b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}
    
int main()
{
    int a,b;
    cout<<"Enter a number a=";
    cin>>a;
     cout<<"Enter a number b=";
    cin>>b;
    cout<<"small muber is ="<<minoftwo(a,b)<<endl;
    return 0;
}
