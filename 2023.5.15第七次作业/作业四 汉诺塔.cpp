#include<iostream>
using namespace std;
static int time=0; 
class hanoi
{
	public:
	hanoi()
	{
	}

	void change(int x,char a,char b,char c) //盘子个数，起点，中转，终点	
	{
		
		if(x==1)
		{
		    time++;
			cout<<"step"<<time<<": move disk "<<x<<" from "<<a<<" to "<<c<<endl; 
		}
		else
		{   
		    
			change(x-1,a,c,b);
			time++; 
			cout<<"step"<<time<<": move disk "<<x<<" from "<<a<<" to "<<c<<endl; 
			change(x-1,b,a,c);
		}
	                                      
	}		
	private:
	
};
int main()
{
	int n;
	scanf("%d",&n);
	hanoi K;
	K.change(n,'A','B','C');
	return 0;
}
