#include<iostream>
using namespace std;
class bitchange
{
	public:
	bitchange()
	{
	} //构造函数 
	bitchange(int x,int y)//带参构造函数 ；传数和进制 
	{
	  number=x; 
	  bit=y; 
	}
	void getnum()//进制转化写入数组A 
	{
	  for(int i=0;;i++)
	  {
	 	A[i]=number%bit;
	 	n++;
	 	number=(number-(number%bit))/bit;
	 	if(number==0)
	 	break;
	  }	
	}//共有n个数，从0-n-1	
   

	void print()
	{
		
		for(int i=0;i<=n-1;i++)
		{
			cout<<A[n-1-i];
		}
		cout<<endl;
	}
	int n;		
	private:
	int A[10000];//分拆数组 
	int number;//接受传入的数
	int bit;//记录目标进制 
	//记录数组长度 
};
	
int main()
{

	int a,b;
	int z;//循环次数
	scanf("%d",&z);
	for(int i=1;i<=z;i++)
	{	
	
	 scanf("%d%d",&a,&b);
	 bitchange B(a,b);
	 B.n=0;
	 B.getnum();
	 B.print();
	}
	return 0;	
}
