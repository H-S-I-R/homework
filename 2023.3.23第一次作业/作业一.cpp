#include<iostream>
using namespace std;
class _3bitnum
{
	public:
	void getnum()
	{
	cin>>i;	
	}
	void getapart()
	{
		a=i/100;
		i=i-a*100;
		b=i/10;
		i=i-b*10;
		c=i;
    }
    void getsum()
    {
    sum=a+b+c;
	cout<<sum<<endl;	
	}	
	private:
	int i;
	int a,b,c;
	int sum;
 };
 int main()
 {
 	_3bitnum A;
 	A.getnum();
 	A.getapart();
 	A.getsum();
 	return 0;
 }
