#include<iostream>

void swap(int *p1,int *p2)
{
     int t;
     t = *p1;
     *p1=*p2;
     *p2=t;
}
void sort(int a[],int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++) 
        {
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
}

void putin(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        std::cin >> *(a+i);
    }
}

void putout(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        std::cout << *(a+i)<<" ";
    }
}

void combine(int a[],int n1,int b[],int n2,int c[])
{
	int t,j=0,k=0;
	for (int i=0;i<n1+n2;i++)
	{
		if (a[j]>b[k])
		{
			c[i]=a[j];
			j++;
			continue;
		}
		if (a[j]<b[k])
		{
			c[i]=b[k];
			k++;
		}
	}
}

int main()
{
	int a1[99],a2[99],c[99];
	int n1,n2;
	std::cout<<"输入两个数组大小"<<std::endl;
	std::cin>>n1>>n2;
	std::cout<<"输入第一个数组"<<std::endl; 
	putin(a1,n1);
	std::cout<<"输入第二个数组"<<std::endl;
	putin(a2,n2);
	sort(a1,n1);
	sort(a2,n2);
	combine(a1,n1,a2,n2,c);
	putout(a1,n1);
	std::cout<<std::endl;
	putout(a2,n2);
	std::cout<<std::endl;
	putout(c,n1+n2); 
}
