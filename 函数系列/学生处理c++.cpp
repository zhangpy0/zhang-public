#include<bits/stdc++.h>
using namespace std;

class stu
{
	public: 
		long long int ID;
		char name[20];
		float grade_1;
		float grade_2;
		float grade_3;
		float average;
};

void aver(stu *p,int n)
{
	for (int i = 0;i<n;i++)
	{
		(p+i)->average = ((p+i)->grade_1 + (p+i)->grade_2 + (p+i)->grade_3)/3.0;
	}
}

void highest(stu *p,int n)
{
	int j = 0;
	float t = 0;
	for (int i=0;i<n;i++)
	{
		if (((p+i)->average) > t)
		{
			t = ((p+i)->average);
			j = i;
		}
	}
	cout<<"最高分学生ID:"<<(p+j)->ID<<endl;
	cout<<"最高分学生姓名:"<<(p+j)->name<<endl;
	cout<<"最高分学生学科1成绩:"<<(p+j)->grade_1<<endl;
	cout<<"最高分学生学科2成绩:"<<(p+j)->grade_2<<endl;
	cout<<"最高分学生学科3成绩:"<<(p+j)->grade_3<<endl;
	cout<<"最高分学生平均分:"<<(p+j)->average<<endl;
}

void input(stu *p,int n)
{
	for (int i = 0;i<n;i++)
	{
		cout<<"输入第"<<i+1<<"个学生ID:";
		cin>>(p+i)->ID;
		cout<<"输入第"<<i+1<<"个学生姓名:";
		cin>>(p+i)->name;
		cout<<"输入第"<<i+1<<"个学生学科1成绩:"; 
		cin>>(p+i)->grade_1; 
		cout<<"输入第"<<i+1<<"个学生学科2成绩:"; 
		cin>>(p+i)->grade_2;
		cout<<"输入第"<<i+1<<"个学生学科3成绩:"; 
		cin>>(p+i)->grade_3;
	}
}

void output(stu *p, int n)
{
	for (int i=0;i<n;i++)
	{
		printf("学生%s的平均分:%f\n",(p+i)->name,(p+i)->average);
	}
}
int main()
{
	int n;
	cout<<"输入学生个数：";
	cin>>n;
	stu *p;
	p = (stu *)malloc(n * sizeof(stu));
	input(p,n);
	aver(p,n);
	output(p,n);
	highest(p,n);
	free(p); 
}
