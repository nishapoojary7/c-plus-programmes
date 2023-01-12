#include<iostream.h>
#include<conio.h>
void main()
{
    int fact,n,i;
    clrscr()
    cout<<"enter the numbers"<<endl;
    cin>>n;
    fact=1;
    for(i=1;i<=n;i++)
    {
fact=fact*i;
    }
    cout<<"factorial of "<<n<<"="<<fact<<endl

}