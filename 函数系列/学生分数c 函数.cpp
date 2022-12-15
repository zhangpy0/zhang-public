#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char name[20];
		int grade;
}stu;

void getin(int i,stu *p)
{
	printf("please put stuents name and grade:");
	scanf("%s %d",(p+i)->name,&(p+i)->grade);
}

int average_score(stu *p,int n)
{
	int s = 0;
	for (int i=0;i<n;i++)
	{
		s = s + (p+i)->grade;
	}
	return s/n;
}

void search(stu *p,char *who,int n)
{
	int t=0;
	for (int i=0;i<n;i++)
	{
		if (strcmp(who,(p+i)->name)==0)
		{
			puts((p+i)->name);
			printf("%d",(p+i)->grade);
			t=1;
		}
	}
	if (t==0)
	{
		printf("the name dose not exist");
	}
}

int main()
{
	int n;
	printf("the num of students:");
	scanf("%d",&n);
	stu *p;
	p = (stu *)malloc(n*sizeof(stu));
	
	for (int i=0;i<n;i++)
	{
		getin(i,p);
	}
	int s = average_score(p,n);
	printf("average score: %d\n",s);
	char who[20];
	printf("please put the name:");
	scanf("%s",who);
	search(p,who,n);
	free(p); 
}
