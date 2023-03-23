#include<iostream>
#include<stdio.h>
#include<string.h> 
using namespace std;
class str
{
	public:
	void startB()
	{
		for(int i=0;i<=25;i++)
		{
			B[i]=0;
		}	
	}	
	void getstring()
	{
	 scanf("%s",A);	
	}
	void rankA()
	{
		char temp;
		for(int i=1;i<=strlen(A)-1;i++)
		{
			for(int j=0;j<=strlen(A)-1-i;j++)
			{
				if(A[j]>=A[j+1])
				{
				 temp=A[j];
				 A[j]=A[j+1];
				 A[j+1]=temp;
				}
			}
		}
	}
	void search_conclude()//B数组为0-m 
	{
	   m=0;
	   for(int i=0;i<=strlen(A)-1;)
	   {
	   	if(A[i]==A[i+1])
		   {
		   	B[m]++;
		   	i++;
		   } 
		 else if(A[i]!=A[i+1]&&A[i+1]!='/0')
		 {
		 	B[m]++;
		 	m++;
		 	i++;
		 }  
	   	else if(A[i]!=A[i+1]&&A[i+1]=='/0')
	   	{
	   	   B[m]++;
		   break;	
		}   
	   }	
	}	
	void rankB()
	{
	  	int temp;
		for(int i=1;i<=m;i++)
		{
			for(int j=0;j<=m-i;j++)
			{
				if(B[j]<=B[j+1])
				{
				 temp=B[j];
				 B[j]=B[j+1];
				 B[j+1]=temp;
				}
			}
		}
	}
	int math()
	{ 
	    long long int sum=0;
		for(int i=0;i<=m;i++)
		{
			sum=sum+B[i]*(26-i);
		}
		return sum;
	}
	private:
	char A[10001];
	int B[26];
	int m;//记录B的长度		
};
int main()
{
	str x;
	x.startB();
	x.getstring();
	x.rankA();
	x.search_conclude();
	x.rankB();
	cout<<x.math();
	return 0;
}
