#include<iostream.h>
class cube
{
    public:
    Inline int cub(int a)
    {
        return(a*a*a);
    }
    };
    void main()
    {
        cube c;
        int n;
        cout<<"enter the number"<<endl;
        cin>>n;
        cout<<"cube of"<<n<<"="<<c.cub(n);
    }
    } 
    }
}