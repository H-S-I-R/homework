#include<iostream>
using namespace std;
class group
{
	public:
	group()
	{
	}
	void search_conclude(int X[][2],int x/*数组长度*/,int a/*最大值*/,int b/*最小次数*/)
	{
		for(int j=a;j>=0;j--)//次数 
		{	
	    	sum=0;
		 for(int i=0;i<=x-1;i++)//逐行检索 
		 {
			if(X[i][0]==j)
			{
				sum+=X[i][1];
			}
		 } 
		 if(j==a&&j==0)
		 {
		 	cout<<sum;
		 }
		 else if(j!=a&&j==0)
		 {
		 	cout<<"+"<<sum;
		 }
		  else if(j==a&&j!=0&&sum!=0)
		 {
		 	cout<<sum<<"x"<<j;;
		 }
		 else if(j!=a&&j!=0&&sum!=0)
		 {
		 cout<<"+"<<sum<<"x"<<j;
	     }
	    }
	}	
		
	private:
	int sum;//记录系数的中间变量7	
};
int main()
{
	int A[10000][2];
	int n=0;
	int a,b;
	int max;//记录最高次数 
	int min; 
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		A[n][0]=a;
		A[n][1]=b;
		n++;//从零到n-1,共n个数 
	}
	max=A[0][0]; 
	min=A[n-1][0];
	group we;
	we.search_conclude(A,n,max,min);
	return 0;
}
