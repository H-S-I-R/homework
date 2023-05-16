#include<iostream>
using namespace std;
class array
{
	public:
	array()
	{
	}
	array(int x)
	{
	n=x;		
	}	
	void search_print(char A[])
	{
		b=0;
	 for(int i=0;i<=n-1;i++)
	 {
	 
	 	if(A[i]!=' '&&A[i+1]=='\0')
	 	{
	 		b++;
	 		cout<<b;
		 }
		if(A[i]!=' '&&A[i+1]==' ')
		{
			b++;
			cout<<b<<" ";
			b=0;
		 } 
		 if(A[i]!=' '&&A[i+1]!=' ')
		 {
		 	b++;
		 }
     } 
	}	
	private:
	int n;//记录数组长度 
	int b;
	
}; 
int main() 
{
	char A[1000];
	char ch;
	ch=getchar();
	int n=0;
	while(ch!='.')
	{
     A[n]=ch;
     ch=getchar();
     n++;
	}
	A[n]='\0';
	array words(n);
	words.search_print(A);
	return 0;
 } 
