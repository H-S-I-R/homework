#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class adress
{
	public:
	void inchar()
	{
		scanf("%s",A); 	
	}	
    void wordcheck()
	{
		a=0;
	   for(int i=0;i<=strlen(A)-1;i++)
	  {
		if('a'<=A[i]&&A[i]<='z'||'A'<=A[i]&&A[i]<='Z'||'0'<=A[i]&&A[i]<='9'||A[i]=='-'||A[i]=='_'||A[i]=='@'||A[i]=='.')
		{
			
		 a=a+0;
		}
		else
		{
			a++;
			break;
		}					
	  }
	}//当且仅当a为0时合规	
	void at_check()
	{
		if(A[0]=='@'||A[strlen(A)-1]=='@')
	      {
			b=0;
		  }
		else
		{
	       for(int i=0;i<=strlen(A)-1;i++)
	       {
	          if(A[i]=='@')
			  {
				b++;
			  }  
		   }					
	     }		
	}//当且仅当b=1时合规	
    void dotcheck()//c为1合规 
	{	
		if(	A[strlen(A)-1]=='.')
		{
		c=0;	
		}
		else
		{
			for(int i=0;i<=strlen(A)-1;i++)
	       {
	          if(A[i]=='.')
			  {
				c++;
			  }  
		   }
		   if(c!=1)
		   {
		   	c=0;
			}
			else if(c==1)
			{
				for(int i=0;i<=strlen(A)-1;i++)
	            {
	                if(A[i]=='.')
			       {
				     if(i==0)
				     {
				     	c=1; 
					 }
					 else
					 {
					 	if(A[i-1]!='@')
					 	{
					 	 c=1;
						}
						else
						{
							c=0;
						}
					 }
			       }  
		        }	
			}	
		}
			
	}		
	void judge_print()
	{
	 if(a==0&&b==1&&c==1)
	 {
	 	cout<<"yes";
	 }	
	 else
	  {
	  	cout<<"no";
	  }	
		
	}	
	private:	
	char A[1000];
	int a;//字符自检
	int b;//@自检
	int c;//.自检 	
};
int main()
{
	adress A;
	A.inchar();
	A.wordcheck();
	A.at_check();
	A.dotcheck();
	A.judge_print();
	return 0;
}
