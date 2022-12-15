#include<bits/stdc++.h>
using namespace std;

double Definite_Integral(double a,double b,double(*F)(double))
{
	double n = 0.000001;
	double t,S = 0;
	for (double i = a;i < b;i = i + n)
	{
		t = (*F)(i);
		S = S + t;
	}
	return S*n;
}

double F(double x)
{
	double s = x * x + x + 1.000;
	return s;
}

int main()
{
	double a,b;
	cout<<"积分下限：";
	cin>>a;
	cout<<"积分上限：";
	cin>>b;
	double ans = Definite_Integral(a,b,F);
	cout<<ans<<endl;
}
