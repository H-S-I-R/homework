#include<iostream>
using namespace std;
class date
{
	public:
	date()//给年月日赋初值 
	{
		yearday=0;
		monthday=0;
	} 
	date(int x,int y,int z)//读取年月日 
	{
	year=x;month=y;day=z;	
	}
	void print(int x)//传入与1月1日相隔的天数除以七的余数，余数为0打印周一,以此类推 
	{
		switch(x)
		{
			case 0:
			cout<<"Monday";
			break;
			case 1:
			cout<<"Tuesday";
			break;
			case 2:
			cout<<"Wednesday";
			break;
			case 3:
			cout<<"Thursday";
			break;
			case 4:
			cout<<"Fridayday";
			break;
			case 5:
			cout<<"Saturday";
			break;
			case 6:
			cout<<"Sunday";
			break;
		 } 
		
	}	
	int yearjudge(int x)//传年份,是闰年返回1;平年返回0 
	{
	 if(x%4==0&&x%100!=0||x%400==0)
	 {
	 	return 1; 
	 } 
	 else
	 {
	 	return 0;
	 }
	} 
	int calmonthday(int x,int y)//传月份，传闰平年的判断数，返回月份的总和天数 
	{
		if(y==1)
		{
			switch (x)
			{
				case 1:
				return 0; 
				break;
				case 2:
				return  31; 
				break;
				case 3:
				return  (31+29); 
				break;
				case 4:
				return  (31+29+31); 
				break;
				case 5:
				return  (31+29+31+30); 
				break;
				case 6:
				return  (31+29+31+30+31); 
				break;
				case 7:
				return  (31+29+31+30+31+30); 
				break;
				case 8:
				return  (31+29+31+30+31+30+31); 
				break;
				case 9:
				return  (31+29+31+30+31+30+31+31); 
				break;
				case 10:
				return  (31+29+31+30+31+30+31+31+30); 
				break;
				case 11:
				return  (31+29+31+30+31+30+31+31+30+31); 
				break;
				case 12:
				return  (31+29+31+30+31+30+31+31+30+31+30); 
				break;
				
			 } 
		 } 
        else if(y==0)
		{
			switch(x)
			{
			    case 1:
				return 0; 
				break;
				case 2:
				return  31; 
				break;
				case 3:
				return  (31+28); 
				break;
				case 4:
				return  (31+28+31); 
				break;
				case 5:
				return  (31+28+31+30); 
				break;
				case 6:
				return  (31+28+31+30+31); 
				break;
				case 7:
				return  (31+28+31+30+31+30); 
				break;
				case 8:
				return  (31+28+31+30+31+30+31); 
				break;
				case 9:
				return  (31+28+31+30+31+30+31+31); 
				break;
				case 10:
				return  (31+28+31+30+31+30+31+31+30); 
				break;
				case 11:
				return  (31+28+31+30+31+30+31+31+30+31); 
				break;
				case 12:
				return  (31+28+31+30+31+30+31+31+30+31+30); 
				break;	
	         }
			
		}	
	} 
	
	int calyearday()//计算年份上的天数差距 
	{
		if(year==1900)
		{
			yearday=0;
		}
		else
		{
			for(int i=0;i+1900<year;i++)
			{
				if(this->yearjudge(i+1900)==1)
				{
					yearday=yearday+366;
				} 
				else
				{
					yearday=yearday+365;
				}
			}
		}
	 } 
	 int year,month,day;
	int yearday,monthday;	
	private:
 } ;
 int main()
 {
 	int m,n,q;
 	scanf("%d-%d-%d",&m,&n,&q);
 	date A(m,n,q);
 	A.calyearday();
 	A.print((A.yearday+A.calmonthday(n,A.yearjudge(m))+A.day-1)%7);
 	return 0;
 }
