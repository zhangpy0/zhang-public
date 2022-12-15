#include<stdio.h>

void longest(char c[])
{
	
	int i,j=1,k=0,t;
	int a[99];
	int b[99];
	for (i=0;;i++)
	{		
		for (;;j++)
		{
			if(c[j+1]=='\0')
			{
				break;
			}
			if (c[0]!=' '&&j==1)	
			{
				a[i]=0;
			}
			if (c[j]!=' '&&c[j-1]==' ')
			{
				a[i]=j;
			}		
			if (c[j]==' '&&c[j-1]!=' ')
			{
				b[i]=j;
				j++;
				break;
			}
		}
		if ((b[i]-a[i])>k)
		{
			k = b[i]-a[i];
			t=i;
		}
		if (c[j+1]=='\0')
		{
			break;
		}
	}
	char l[99];
	for (int p=0;p<k;p++)
	{
		l[p]=c[a[t]+p];
	}
	puts(l);
}


/*int main()
{
	char a[99];
	int length;
	gets(a);
	longest(a);
}*/
