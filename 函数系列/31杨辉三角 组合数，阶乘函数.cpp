#include<stdio.h>


int factorial(int y)
{
	long long int s=1,n;
	for (n=1,s=1;n<=y;n++)
	{
		s = n*s;
		if (y==0) break;
	}
	return  s;
}

int combination(int p,int q)
{
	long long int C,P,Q,M;
	P = factorial(p);
	Q = factorial(q);
	M = factorial(p-q);
	C = P/(Q*M);
	return C;
}

int main()
{	
	long long int N,i,j,x;
	printf("Êä³öÐÐÊý=");
	scanf("%d",&N);
	
	for (i=1;i<=N;i++)
	{
		long long int a[i];
		for (j=1;j<=i;j++)
		{
			a[j-1] = combination(i-1,j-1);
		}
		for (x=0;x<=i-1;x++)
		{
			printf("%d ",a[x]);
		}
		printf("\n");
	}
	return 0;
} 
