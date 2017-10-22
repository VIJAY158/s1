#include<stio.h>
#include<conio.h>
int main()
{
int no;
printf("Enter the number to check:\n");
scanf("%d",&no);
if(no>0)
{
printf("The no %d is positive",no);
}
else if(no<0)
{
printf("The no %d is negative",no);
}
else
{
printf("The no is zero");
}
return 0;
}
