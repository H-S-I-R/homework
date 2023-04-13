#include<iostream>
using namespace std;
class time
{
	public:
	time()
	{
	}
	time (int x)
	{
		n=x;
	}
	void change()
	{
	n=n-800;
	if(n<0)
	{
	n=n+2400;	
	}	
	cout<<n;	
	}		
	private:	
	int n;	
};
int main()
{
	int a;
	scanf("%d",&a);
	time A(a);
	A.change();
	return 0;
}
  
