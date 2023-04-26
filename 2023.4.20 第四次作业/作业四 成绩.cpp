#include<iostream>
using namespace std;
class grade{
public:
grade(){
}	
grade(int a)
{
	this->a=a;
	if(90<=this->a)
	{
		cout<<"A"<<endl;	
	}
	else if(80<=this->a&&this->a<90)
	{
		cout<<"B"<<endl;	
	}
	else if(70<=this->a&&this->a<80)
	{
		cout<<"C"<<endl;	
	}
	else if(60<=this->a&&this->a<70)
	{
		cout<<"D"<<endl;	
	}
	else if(60>this->a)
	{
		cout<<"E"<<endl;	
	}
}
	

private:
int a;	
}; 
int main()
{
	int a;
	scanf("%d",&a);
	grade A(a);
	return 0;
}
