#include<iostream>
using namespace std;
class group
{
	public:
	group()
	{
	}
	group(int *x)
	{
	p=x;	
	}
	void print()
	{
	for(int i=31;i>=0;i--)
	{
	cout<<*(p+i);	
	}
	}		
	private:	
	int *p;
	
};
int main()
{
	int A[32];
	for(int i=0;i<=31;i++)
	{
		scanf("%1d",&A[i]);
	}
	group B(A);
	B.print();

	return 0;
}
