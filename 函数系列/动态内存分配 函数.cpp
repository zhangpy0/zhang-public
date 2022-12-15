#include<bits/stdc++.h>
using namespace std;

void * creat(int n,const char *q)
{
	void *p = NULL;
	char c1[] = "char";
	char c2[] = "int";
	char c3[] = "double";
	char c4[] = "float";
	
	if (strcmp(q,c1)==0)
	{
		p = (char *)malloc(n * sizeof(char));
	}
	if (strcmp(q,c2)==0)
	{
		p = (int *)malloc(n * sizeof(int));
	}
	if (strcmp(q,c3)==0)
	{
		p = (double *)malloc(n * sizeof(double));
	}
	if (strcmp(q,c4)==0)
	{
		p = (float *)malloc(n * sizeof(float));
	}
	return p;
}



/*int main()
{
	char *h;
	h = (char *)creat(8,"char");
	cout<<sizeof(h)<<endl;
	
}*/
