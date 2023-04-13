#include<iostream> 
using namespace std;
class huiwen
{
	public:
	huiwen()
	{
	}
	huiwen(int y):a(y) 
	{
	}
	int huiwenjudge(int y)
	{
		int x=1;//回文判断数 
		n=0;
		for(int i=0;;i++)
		{
			A[i]=y%10;
			n++;
			y=y/10;
			if(y==0)
			break;
		} 
		//n个，0-n-1
		for(int i=0;i<=(n-1)/2;i++)
		{
			if(A[i]!=A[n-1-i])
			x=0;
			break; 
		}
		return x; 
	}
	
	private:
	int a;//储存输入的数 
	int A[100000];
	int n;//记录数组长度 
};
int main()
{
	
	int b;
	int aa,bb;
	scanf("%d",&b);
	for(int i=1;i<=b;i++)
	{
		scanf("%d%d",&aa,&bb);
		huiwen P(aa);
		for(int m=1;m<=bb;)
		{
			if(P.huiwenjudge(aa)==1)
			{
				cout<<aa<<" ";
				aa++;
				m++;
			}
			else
			{
				aa++;
			}	
		}
		cout<<endl;
	}
	return 0;
}

