#include<iostream>
#include<stdio.h> 
using namespace std;
class group
{
public:
	void starter()
	{
		for(int i=0;i<=20;i++)
		{
			A[i]=1997;
			B[i]=1997;
		}
		for(int i=0;i<=20;i++)
		{
			for(int j=0;j<=2;j++)
			{
				C[i][j]=1997;
			}
		}
		
	}
	void getn()
	{
		cin>>n;
	}
	void getin_copy()
	{
		for(int i=0;i<=n-1;i++)
		{
			scanf("%d",&A[i]);
			B[i]=A[i];//B为排序表，A为原表 
		}
	}
	void rank()
	{
		for(int i=1;i<=n-1;i++)
		{
			for(int j=0;j<=n-1-i;j++)
			{
			if(B[j]>=B[j+1])
			{
				temp=B[j];
				B[j]=B[j+1];
				B[j+1]=temp;
			}	
				
			}
		 } 
	}
    void abstruct()
    {
    	m=0;
    	for(int i=0;i<=n-2;)
    	{
    		if(i==0)
    		{
    			if(B[i]==B[i+1]&&B[i+1]!=B[i+2])
    			{
    				C[m][0]=B[i];
					m++;
					i++;	
				}
				else
				{
					i++;
				}
			}
			else if(i==n-2)
			{
				if(B[i]==B[i+1]&&B[i]!=B[i-1])
				{
					C[m][0]=B[i];
					m++;
					i++;
				}
				else
				{
					i++;
				}
			}
			else
			{
				if(B[i]==B[i+1]&&B[i+1]!=B[i+2]&&B[i]!=B[i-1])
				{
					C[m][0]=B[i];
					m++;
					i++;
				}
				else
				{
					i++;
				}
			}
        }
	}
    void search_print()
    {
    	for(int i=0;i<=n-1;i++)
    	{
    	for(int j=0;j<=m-1;)	
    	{
    		if(A[i]!=C[j][0])
    		{ 
    		j++;
    		} 
    		else
    		{
    			cout<<C[j][0]<<;
    			C[j][0]=1997;
    			i++;
			}
		}
		}
	}
private:	
	int A[21];
	int B[21];
	int C[21][3]; 
	int n;//输入个数
	int m;//C表的递增变量 
	int temp;
};
int main()
{
	group M;
	M.starter();
	M.getn();
	M.getin_copy();
	M.rank();
	M.abstruct();
	M.search_print();
	return 0;
 } 
