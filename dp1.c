#include<stdio.h>
int main()
{
int a[4],i,x,y;
printf("enter 4 numbers\n");
for(i=0;i<=3;i++)
scanf("%d",&a[i]);
x=a[1];
a[1]=a[0];
a[0]=x;
y=a[3];
a[3]=a[2];
a[2]=y;
for(i=0;i<=3;i++)
printf("%d\n",a[i]);
return 0;

}
