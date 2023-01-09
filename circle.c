#include<iostream.h>
#include<conio.h>
void main()
{
    const float PI=3.14;
    float a,c,r;
    clrscr();
    cout<<"enter the value of radius"<<endl;
    cin>>r;
    a=PI*r*r;
    c=2*PI*r;
    cout<<"Area="<<a<<endl;
    cout<<"Circumference="<<c<<endl;
}
