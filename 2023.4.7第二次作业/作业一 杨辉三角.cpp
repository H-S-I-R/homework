#include<iostream>
using namespace std;
	int calnumber(int m,int n);
	int calnumber(int m,int n)//计算某个位置的Cmn 
	{
		long long int a=1;
		long long int b=1;
		for(int i=0;i<=n-1;i++)
		{
			a*=m-i;
		}
		for(int i=1;i<=n;i++)
		{
			b*=i;
		}
		return (a/b);
	}
class triangle
{
	public:

	void print(int n)//打印前n行 
	{
		if(n==1)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"1"<<endl;
			for(int i=2;i<=n;i++)
			{
				for(int j=0;j<=i-1;j++)
				{
					cout<<calnumber(i-1,j)<<" "; 
				}
				cout<<endl;
			}	
		    
	    }
	}
}; 
int main()
{
	triangle A;
	int N;
	int number;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d",&number);
		A.print(number); 	
	}
	return 0;
}
