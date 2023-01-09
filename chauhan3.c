#include<stdio.h>
int main()
{
int a,b,c,d,e,avg,total;
float percentage;
printf("enter marks of maths");
scanf("%d",&a);
printf("enter marks of english");
scanf("%d",&b);
printf("enter marks of hindi");
scanf("%d",&c);
printf("enter marks of science");
scanf("%d",&d);
printf("enter marks of computer");
scanf("%d",&e);
total=a+b+c+d+e;
avg=total/5;
percentage=total*100/500;
printf("average of all subjects is %d ,total of all subjects is %d and percentage is %f %%",avg,total,percentage);
return(0);
}

