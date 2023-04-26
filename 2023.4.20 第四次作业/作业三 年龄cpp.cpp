#include<iostream>
using namespace std;
class age{
public:
age(){
}	
age(int a)
{
	this->a=a;
	if(1<=this->a&&this->a<=10)
	{
		cout<<"Children"<<endl;	
	}
	else if(10<this->a&&this->a<=20)
	{
		cout<<"Teenagers"<<endl;	
	}
	else if(20<this->a&&this->a<=40)
	{
		cout<<"Youth"<<endl;	
	}
	else if(40<this->a&&this->a<=50)
	{
		cout<<"Middle-aged"<<endl;	
	}
	else if(50<this->a&&this->a<=80)
	{
		cout<<"Elderly"<<endl;	
	}
	else if(80<this->a&&this->a<=100)
	{
		cout<<"Old man"<<endl;	
	}
}
	

private:
int a;	
}; 
int main()
{
	int a;
	scanf("%d",&a);
	age A(a);
	return 0;
}
