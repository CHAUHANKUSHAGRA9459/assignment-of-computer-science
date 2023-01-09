#include<stdio.h>
int main()
{
int a,b,c;
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
printf(" the values before sap a=%d and b=%d",a,b);
c=a;
printf("\n the values of a is %d ",a);
a=b; 
b=c;
printf("\n the values after sap a=%d and b=%d",b,a);
return(0);
}

