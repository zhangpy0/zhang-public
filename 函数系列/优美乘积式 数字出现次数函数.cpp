#include<stdio.h>

void seta(int a[],int n)
{
	int re=0;
	while (n!=0)
	{
		re = n%10;
		a[re]++;
		n = n/10;
	}
}


int isb(int n1,int n2)
{
	int n3 = n1 * n2;
	int a[10]={0};
	seta(a,n1);
	seta(a,n2);
	seta(a,n3);
	
	int j=1;
	for (int i=0;i<10;i++)
	{
		if (a[i]!=1)
		{
			j = 0;
		}
	}
	return j;
} 

int main()
{
	int a,b,i=0;
	for (a=1;a<100;a++)
	{
		for (b=a+1;b<10000;b++)
		{
			if(isb(a,b)==1)
			{
				printf("%d * %d = %d\n",a,b,a*b);
				i++;
			}
		}
	}
	printf("¸öÊı£º%d",i);
}
