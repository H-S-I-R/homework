#include<iostream>
using namespace std;
class number
{
	public:
	number()
	{
	}
	number(int x,int y)
	{
	a=x;
	b=y;	
	}
	void print()
	{
		int n=1;
		int c;
		for(;n<=200;n++)
		{
			c=a*10%b; 
			if(c==0)
			{
			break;
			}
			else
			{
				cout<<(a*10-c)/b;
				a=c;
			}
	    }
	}	
	
	
	
	int a,b;
};
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	number A(a,b);
	cout<<"0.";
	A.print();
	return 0;
	
	
	
}
