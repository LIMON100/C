
#include<iostream>
using namespace std;

class number
{
    int x,y;
public:
    number()
    {
        x=0;
        y=0;
    }
    number(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }

    number operator + (number ob);
    bool operator < (number ob);
    bool operator == (number ob);


};

number number::operator + (number ob)
{
    number t;
    t.x=x+ob.x;
    t.y=y+ob.y;

    return t;
}

bool number::operator<(number ob)
{
    return (x+y)<(ob.x+ob.y);
}

bool number::operator == (number ob)
{
    return (x+y)==(ob.x+ob.y);
}

int main()
{
    number n1(10,20),n2(20,10),n3;
    n3=n1+n2;
    n3.print();

    if(n1<n2)
    {
        cout<<"n1"<<endl;
    }
    else if(n1==n2)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"n2"<<endl;

    }


    return 0;
}
