#include<iostream>
#include<string.h>
using namespace std;
class chart
{
	private:
	int time;
	
	public: 
	char temp[40];
	float temp1;
	char A[100][40];//名字 
	float  B[100];//平时成绩 
	float  C[100];//期末成绩 
	float  D[100];//总成绩 
	
	chart()
	{
		time=0;
	}
	void in()
	{
    	for(int i=0;scanf("%s%f%f",&A[i],&B[i],&C[i])!=EOF;i++)
    	{
	    	time++; //n个数，0-n-1 
    	}
    }
	void average()
	{
		for(int i=0;i<=time-1;i++)
		{
			D[i]=B[i]*0.4f+C[i]*0.6f;
		}
	}
	void rank()
	{
		for(int i=1;i<=time-1;i++)
		{
			for(int j=0;j<=time-1-i;j++)
			{
				if(D[j]<=D[j+1])
				{
					temp1=D[j];
					D[j]=D[j+1];
					D[j+1]=temp1;
					temp1=B[j];
					B[j]=B[j+1];
					B[j+1]=temp1;
					temp1=C[j];
					C[j]=C[j+1];
					C[j+1]=temp1;
					strcpy(temp,A[j]);
					strcpy(A[j],A[j+1]);
					strcpy(A[j+1],temp);	
				}
			}
			
		 } 	
	}
	void print()
	{
		for(int i=0;i<=time-1;i++)
		{
		printf("%s %.2f %.2f %.2f",A[i],B[i],C[i],D[i]);	
		printf("\n");
		}
	
	}
	
};

int main()
{


	chart student;
	student.in();
	student.average();
	student.rank();
	student.print();
	
	
	
	
	
	return 0;
}
