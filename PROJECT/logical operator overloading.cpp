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

    bool operator && (number ob);
};

bool number::operator&&(number ob)
{
    return (x&&y) && (ob.x && ob.y);
}

int main()
{
    number n1(1,2),n2(0,5),n3;
    if(n1&&n2)
    {
        cout<<"Perfect"<<endl;
    }
    else
    {
        cout<<"Error"<<endl;
    }
    return 0;
}

