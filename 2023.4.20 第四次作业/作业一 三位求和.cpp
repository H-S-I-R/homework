#include<iostream>
using namespace std;
class number
{
	public:
	number()
	{
	}
	number(int a)
	{
		this->a=a;
	}
	int math()
	{
		b=0;
	    b+=a%10;
	    a=a/10;
	    b+=a%10;
	    a=a/10;
	    b+=a%10;
	    return b;
	}
    private:
	int a;
	int b;	
};
int main()
{
	int a;
	scanf("%d",&a);
	number A(a);
	printf("%d",A.math());
	return 0;
}
 
