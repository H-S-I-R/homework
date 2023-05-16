#include<iostream>
#include<math.h>
using namespace std;
class square
{
	int a,b;
	public:
	square()
	{
	}
	square(int x,int y)
	{
	a=x;
	b=y;	
    }	
    void pow()
    {
    if(a==0&&b>0)
    {
    	cout<<0;
	}
	else if(b==0)
	{
		cout<<1;
	}
	else if(a!=0&&b>0)
	{
		long long int c=1;
		for(int i=1;i<=b;i++)
		{
			c*=a;
		}
		cout<<c;
	}
	else if (b<0)
	{
		float d=1;
		for(int i=1;i<=abs(b);i++)
		{
			d*=a;
		}
		printf("%.5f",1/d);
	}
}
};
int main()
{
	float a;
	int b;
	scanf("%f,%d",&a,&b);
	square A(a,b);
	A.pow();
 return 0;
}
