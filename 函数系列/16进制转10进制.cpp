#include<stdio.h>
#include<string.h>
#include<math.h>


int tran(char s[]);
int main()
{
	char s[20];
	int n;
	gets(s);
	n=tran(s);
	printf("对应的十进制数是%d\n",n);
	return 0;
}
int tran(char s[])
{
	int re,i,m;
	re=0;
	m=strlen(s);
	for(i=0;i<m;i++)
	{
		if(s[m-1-i]>='0'&&s[m-1-i]<='9')
			re=re+(s[m-1-i])*pow(16,i);
		if(s[m-1-i]>='a'&&s[m-1-i]<='f')
			re=re+(s[m-1-i]-'a'+10)*pow(16,i);
		if(s[m-1-i]>='A'&&s[m-1-i]<='F')
			re=re+(s[m-1-i]-'A'+10)*pow(16,i);
	}
	return (re);
}

