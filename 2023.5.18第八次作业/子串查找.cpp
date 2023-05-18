#include<iostream>
#include<string.h>
using namespace std;
class array
{
	public:
	array()
	{
	}
	array(int x,int y)
	{
		a=x;
		b=y;
	}
	int mystrstr(char x[],char y[])
	{
		if(a<b)
		{
			return -1;
		}
		else if(a==b)
		{
			if(strcmp(x,y)==0)
			{
				return 0;
			}
			else
			{
				return -1;
			}
			
		}
		else if(a>b)//¼Ù¶¨0-a-1,0-b-1;a-b - a-1
		{
			char temp[b];
			for(int i=0;i<=a-b;i++)
			{
				for(int j=0;j<=b-1;j++)
				{
					temp[j]=x[i+j];
				}
				if(strcmp(temp,y)==0)
				{
					return i;
					break;
				}
				else if (strcmp(temp,y)!=0&&i==a-b)
				{
					return -1;
 				}
			}
		}
	}
	private:
	int a,b;
	
 }; 
 int main()
 {
 	char A[501],B[501];
 	char ch;
 	ch=getchar();
 	int w=0;
 	while(ch!='\n')
 	{
 	 A[w]=ch;
	  ch=getchar();
	  w++;	
	 }
	A[w]='\0';	
	ch=getchar();
 	w=0;
 	while(ch!='\n')
 	{
 	 B[w]=ch;
	  ch=getchar();
	  w++;	
	 }
	 B[w]='\0';
 	array group(strlen(A),strlen(B));
 	cout<<group.mystrstr(A,B)<<endl;

 	return 0;
 }
