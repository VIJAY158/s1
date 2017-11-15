#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the N value:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("The sum of N no's is %d",sum);
return 0;
}
