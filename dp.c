#include<stdio.h>
int main()
{
int a[10],i,sum=0;
float avg;
printf("enter 10 numbers");
for(i=0;i<=9;i++)
{
scanf("%d7",&a[i]);
sum=sum+a[i];
}
avg=sum/10.0;
printf("%f\n",avg);
return 0;
}
