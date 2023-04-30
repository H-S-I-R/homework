#include<iostream>
#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int A[100][100];
	for(int i=0;i<=t-1;i++)
	{
		for(int j=0;j<=t-1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	return 0;
}
