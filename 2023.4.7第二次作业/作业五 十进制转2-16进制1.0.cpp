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
    void change(int x)//将大于等于十的位数转为字母 
    {
    	switch(x)
    	{
    		case 0:
    		cout<<"0";
    		break;
    		case 1:
    		cout<<"1";
    			break;
    		case 2:
    		cout<<"2";
    			break;
    		case 3:
    		cout<<"3";
    			break;
    		case 4:
    		cout<<"4";
    			break;
    		case 5:
    		cout<<"5";
    			break;
			case 6:
    		cout<<"6";
    			break;
    		case 7:
    		cout<<"7";
    			break;
    		case 8:
    		cout<<"8";
    			break;
    		case 9:
    		cout<<"9";
    			break;
    		case 10:
    		cout<<"A";
    			break;
    		case 11:
    		cout<<"B";
    			break;
    		case 12:
    		cout<<"C";
    			break;
    		case 13:
    		cout<<"D";
    			break;
    		case 14:
    		cout<<"E";
    			break;
    		case 15:
    		cout<<"F";
    			break;
    		
		}
	}

	void print()
	{
		
		for(int i=0;i<=n-1;i++)
		{
			this->change(A[n-1-i]);
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
