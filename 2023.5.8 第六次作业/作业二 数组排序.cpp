#include<iostream>
using namespace std;
class group
{
	public:
	group()
	{
	}
	group(int x)
	{
		n=x;
	}
	void sort(int z[],int n)
	{
		int mid;
		for(int i=1;i<=n-1;i++)
		{
			for(int j=0;j<=n-1-i;j++)
			{
				if(z[j]>=z[j+1])
				{
					mid=z[j];
					z[j]=z[j+1];
					z[j+1]=mid;
				}
			}
		}
		for(int i=0;i<=n-1;i++)
		{
			if(i==n-1)
			{
				cout<<z[n-1]<<endl;
			}
			else
			{
				cout<<z[i]<<" ";
			}
		}
	}
	
	private:
	int n;		
};
int main()
{
	int a;
	scanf("%d",&a);
	int A[100];
	for(int i=0;i<=a-1;i++)
	{
		scanf("%d",&A[i]);
	}
	group array(a);
	array.sort(A,a);
	
	
	return 0; 
}
