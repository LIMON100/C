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

    number operator = (number ob);
};

number number::operator = (number ob)
{
    x=ob.x;
    y=ob.y;

    return *this;
}

int main()
{
    number n1(1,2),n2(2,5),n3;
    n1.print();
    n2.print();
    n3=n1=n2;
    n1.print();
    n2.print();
    n3.print();
    return 0;
}

