#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n<0)
printf("invalid");
else if(n%2!=0)
printf("odd");
else if(n%2==0)
printf("even");
}
