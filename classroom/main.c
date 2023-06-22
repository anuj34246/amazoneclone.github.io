#include<stdio.h>
int main ()
{
int j,a[10],s=0;
printf("Enter 10 elements");
for(j=0; j<10; j++)
{
    scanf("%d",&a[j]);
}
for(j=0; j<10; j++)
{
    printf("%d",a[j]);
    s=s+a[j];
}
printf("Sum=%d",s);
return 0;
}