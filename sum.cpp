#include<iostream.h>
#include<conio.h>
void  main()
{
    int n,d;
    clrscr();
    cout<<"enter the numbers"<<endl;
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    cout<<"sum of digits:"<<s<<endl;
    }

