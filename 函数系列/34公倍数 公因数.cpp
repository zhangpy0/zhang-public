#include<stdio.h>

int GY(int x,int y)
{
 int n,t;
 
 t = x>y?x:y;
 for (int i=1;i<=t;i++)
 {
  if (x%i==0&&y%i==0)
  {
   n=i;
  }
 }
 return n;
}

int GB(int x,int y)
{
 int n,t,s,j=1;
 
 t = x>y?x:y;
 s = x<y?x:y;
 for (int i=s;i<=x*y;i++)
 {
  
  if (i%x==0&&i%y==0)
  {
   n=i;
   break;
  }
 }
 return n;
}

int main()
{
 int x,y,a,b;
 scanf("%d %d",&x,&y);
 
 a = GY(x,y);
 b = GB(x,y);
 printf("%d %d",a,b);
}

