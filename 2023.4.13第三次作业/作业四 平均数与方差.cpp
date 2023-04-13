#include<iostream>
using namespace std;
class array
{
	public:
	array()
	{
	}
	array(float a,float b,float c,float d,float e,float f)
	{
	this->a=a;	
	this->b=b;	
	this->c=c;	
	this->d=d;	
	this->e=e;	
	this->f=f;		
	}
    void avarage()
    {
    	avarage1= (a+b+c+d+e+f)/6.0f;
    	printf("%.2f",avarage1 );
	}
	void square()
	{
		
		square1=((a-avarage1)*(a-avarage1)+(b-avarage1)*(b-avarage1)+(c-avarage1)*(c-avarage1)+(d-avarage1)*(d-avarage1)+(e-avarage1)*(e-avarage1)+(f-avarage1)*(f-avarage1))/6.0f;
         printf("%.2f",square1 ); 
	}
	private:
	float a,b,c,d,e,f;
	float avarage1;
	float square1;
}; 
int main()
{
	float a,b,c,d,e,f;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	array A(a,b,c,d,e,f);
	A.avarage();
	cout<<" ";
	A.square();
	cout<<endl;
    }
	return 0;
}
