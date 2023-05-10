#include<iostream>
#include<string.h>
using namespace std;
class cmp
{
	public:
	cmp()
	{
	}
	cmp(int x,int y)//×Ö·û´®µÄ³¤¶È 
	{
		m=x;
		n=y;
	}
	void compare(char x[],char y[])
	{
		int sign=0;
		char mid[10000];
		int location;
		for(int i=0;i<=n-m;i++)
		{
			for(int j=0;j<=m-1;j++)
			{
				mid[j]=y[i+j];
			}
			mid[m]='\0';
			if(strcmp(mid,x)==0)
			{
				cout<<i<<" ";
				sign++;
			}
		}
		if(sign==0)
		{
			cout<<"-1";
		}	
	}
	private:
	int m;
	int n;
};
int main()
{
	char A[10000];
	char B[10000];
	char ch;
	ch=getchar();
	int w=0;
	while(ch!='\n')
	{
		A[w]=ch;
		ch=getchar();
		w++;
	}
	ch=getchar();
	w=0;
	while(ch!='\n')
	{
		B[w]=ch;
		ch=getchar();
		w++;
	}
	
	cmp grou(strlen(A),strlen(B));
	grou.compare(A,B);
	
	
	
	
	return 0;
}
