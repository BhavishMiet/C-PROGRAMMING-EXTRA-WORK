#include<stdio.h>
void main()
{
int add(int,int);
int a,b,c;
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=add(a,b);
printf("sum=Z%d",c);
}
int add(int x,int y)
{
int z=x+y;
return z;    
}