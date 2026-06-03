//BY AIISC AMERICA N STANDARD METHOD
// FOR SMALL a to z a start from 97
// FOR CAPITAL A to Z a start from 65
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character=";
    cin>>c;
    if(c>=65&&c<=90)
    {
        cout<<"UPPERCASE";
    }
    else if(c>=97&&c<=122)
    {
        cout<<"LOWERCASE";
    }
    else
    {
        cout<<"It is not a letter";
    }
    return 0;
}