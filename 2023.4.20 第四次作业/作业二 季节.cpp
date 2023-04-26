#include<iostream>
using namespace std;
class season{
public:
season(){
}	
season(int a)
{
	this->a=a;
	
	switch (this->a)
	{
		case 1:
			{
				cout<<"Spring"<<endl;
				break;
			}
		case 2:
			{
				cout<<"Summer"<<endl;
				break;
			}
		case 3:
			{
				cout<<"Autumn"<<endl;
				break;
			}
		case 4:
			{
				cout<<"Winter"<<endl;
				break;
			}
	}
}
	

private:
int a;	
}; 
int main()
{
	int a;
	scanf("%d",&a);
	season A(a);
	return 0;
}
