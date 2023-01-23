#include<iostream.h>
#include<conio.h>
void main()
{
    char ch;
    
    cout<<"enter the character"<<endl;
    cin>>ch;
    if(ch>='A'&& ch=='Z')
    {
        cout<<"uppercase"<<endl;
    }
    else
    {
        if(ch>='a'&&ch<='z')
        {
            cot<<"lowercase"<<endl;
        }
        else
        {
            cout<<"not an alphabet"<<endl;
        }
        }
    }
