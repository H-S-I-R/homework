#include<iostream>
using namespace std;
class group
{
	public:
	group()
	{
	}
	
	group(int x)//传该行的行数 
	{
	n=x;	
    }
    
	int hang(int x,int y,int X[][100])//若是该行最大值，则返回0
	{
	int sign1=0; 
	for(int i=0;i<=n-1;i++)
	{
		if(X[x][y]<X[x][i])
		{
			sign1++;
		 } 
	}	
	return sign1;		
	} 
	
	
	int lie(int x,int y,int X[][100])//若是该列最小值，则返回0
	{
	int sign2=0; 
	for(int i=0;i<=n-1;i++)
	{
		if(X[x][y]>X[i][y])
		{
			sign2++;
		 } 
	}	
	return sign2;		
	} 
	
    void judge(int A[][100])
    {
    	int x,y;
    	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-1;j++)
		{
			if(hang(i,j,A)==0&&lie(i,j,A)==0)
			{
				x=i;
				y=j;
			goto loop; 
			}
			else if(i==n-1&&j==n-1&&hang(i,j,A)!=0&&lie(i,j,A)!=0)
			{
				cout<<"NO";
			}
		}
	}
	         loop:cout<<x<<" "<<y;
	}
	
	
	private:
	int n;	
		
};
int main()
{
	int t;
	int A[100][100];
	scanf("%d",&t);
	
	for(int i=0;i<=t-1;i++)	
	{
		for(int j=0;j<=t-1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	group S(t);
	for(int i=0;i<=t-1;i++)
	{
		for(int j=0;j<=t-1;j++)
		{
		  S.judge(A);
		}
	}
	return 0;
}
