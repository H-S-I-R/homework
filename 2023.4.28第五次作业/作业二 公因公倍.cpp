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
		c=x;
		d=y;
	}
	int min()
	{
		int mid;
		for(;;)
		{ 
		mid=a%b;
		if(mid==0)
		{
			return b;
			break;
		}
		else
		{
			a=b;
			b=mid;
		}
		} 
	}
		int max()
	{
		int midd;
		midd=c;
		for(;;)
		{ 
		     if(c%d==0&&c%midd==0)
		    {
			return c;
			break;
		    }
		    else
	    	{
			c++; 
	    	}
		} 
	}	
	private:
		int a,b,c,d;	
};
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	number A(a,b);
	cout<<A.max()<<" "<<A.min()<<endl;
    return 0;
}
