#include<stdio.h>
#include<conio.h>
int main()
{
int num,num1;
printf("enter first number");
scanf("%d",&num);
printf("enter second number");
scanf("%d",&num1);
printf("lcm = %d",lcm(num,num1));
}
int lcm(int a, int b)
{
static int m=0;
m = m+b;
if(m%a==0 && m%b==0)
   return m;
return lcm(a,b);
}
