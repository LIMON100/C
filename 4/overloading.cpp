#include<iostream>
using namespace std;

class abc
{
	int *p;
	public:
	   abc()
	   {
	   	 p=new int(0);
	   	 cout<<"Cont.."<<*p<<endl;
	   }

	   ~abc()
	   {
	   	  cout<<"Dis.."<<*p<<endl;
	   	  delete p;
	   }
	   void set(int x)
	   {
	   	 *p=x;
	   }

	   void get()
	   {
	   	 cout<<*p<<endl;
	   }
};

int main()
{
	abc a;
	a.get();
	abc b=a;
	a.get();
	b.get();

	b.set(5);

	a.get();
	b.get();

	return 0;
}
