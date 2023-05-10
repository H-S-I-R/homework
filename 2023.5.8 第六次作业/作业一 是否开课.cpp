#include<iostream>
using namespace std;
class group
{
	public:
	group()
	{
		}	
	group(int x,int y)
	{
	n=x;
	k=y	; 
	}
	int iscanceled(int z[],int x/*总人数*/,int y)
	{
		int sum=0; 
		for(int i=0;i<=x-1;i++)
		{
			if(z[i]<=0)
			{
				sum++;
			}
		}
		if(sum>=y)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		
    }	
		
	
	private:
	int n;//学生人数 
	int k;//到达人数 
 }; 
 int main()
 {
 	int a,b;
 	scanf("%d%d",&a,&b);
 	int A[1000];
 	group student(a,b);
 	
 	for(int e=0;e<=a;e++)
 	{
 		scanf("%d",&A[e]);
	 }
	 
	if(student.iscanceled(A,a,b)==1)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
	return 0; 
 	
 	
 	
 	
 }
