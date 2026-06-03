#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character=";
    cin>>c;
    if(c>='a'&&c<='z')
    {
        cout<<"Lowercase";
    }
    else
    {
        cout<<"uppercase";
    }
    return 0;
}