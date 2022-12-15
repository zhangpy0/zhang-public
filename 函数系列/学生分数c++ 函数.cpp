#include<bits/stdc++.h>
using namespace std;

class stu
{
	public:
		char name[20];
		int grade;
};

void getin(int i,stu *p)
{
	cout<<"please put stuents name and grade:";
	cin>>(p+i)->name>>(p+i)->grade;
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
			cout<<(p+i)->grade;
			t=1;
		}
	}
	if (t==0)
	{
		cout<<"the name dose not exist"<<endl;
	}
}

int main()
{
	int n;
	cout<<"the num of students:";
	cin>>n;
	stu *p;
	p = (stu *)malloc(n*sizeof(stu));
	
	for (int i=0;i<n;i++)
	{
		getin(i,p);
	}
	int s = average_score(p,n);
	cout<<"average score:"<<s<<endl;
	char who[20];
	cout<<"please put the name:";
	cin>>who;
	search(p,who,n);
	free(p);
}
