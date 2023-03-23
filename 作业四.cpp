#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class group
{
	public:
	void getn()
	{
		cin>>n;
	}		
	void getin()
	{
	for(int i=0;i<=n-1;i++)
	  {  
		scanf("%d/%d",&A[i][0],&A[i][1]);
	  } 	
	}
	int judge()//合法返回1； 
	{
		o=0;
		for(int i=0;i<=n-1;i++)
		{
			if(A[i][1]==0)
			{
				o++;
			}
		}
		if(o==0)
		{
			o=1;
		}
		else
		{
			o=0;
		}
	}
    void culculation()
	{
	    y=1;
	    x=0;
	    for(int i=0;i<=n-1;i++)
	    {
	  	y*=A[i][1];
	    }
		for(int i=0;i<=n-1;i++)
		{
		x+=A[i][0]*y/A[i][1];	
		}
	 } 
	void common()
	{
		x1=x;
		y1=y;
		for(;;)
		{
			if(x1%y1!=0)
			{
				temp=x1;
				x1=y1;
				y1=temp%y1;
			}
			else
			{
			break;	
			}	
		}
	}
	int n;
    int y1;
	int x,y;//原始分子分母 
	int o;//零的计数
	int temp;
	int A[10][2];
	private:


	int x1;//辗转相除法复制分母 
	int production;	//分母乘积 	
};
int main()
{   
    group m;
	m.getn();
	if(m.n==1)
	{
		cin>>m.A[0][0];
		cout<<m.A[0][0];
	}
	else
	{
	m.getin();
	m.judge();
	if(m.o==0)
	{
		cout<<"error";
	}
	else
	{
	m.culculation();
	if(m.x%m.y==0)
	{
		cout<<m.x/m.y;
	}
	else
	{
		m.common();
		m.x=m.x/m.y1;
		m.y=m.y/m.y1;
		if(m.x<0||m.y<0)
		{
			cout<<'-'<<abs(m.x)<<"/"<<abs(m.y);
		}
		else
		{
		cout<<m.x<<"/"<<m.y;	
        }
	}
   }  
}
	return 0;
}
