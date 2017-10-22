#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("Enter the 3 integers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("The big no is:\n");
    if((n1>n2) && (n1>n3))
    {
        printf("%d",n1);
    }
    else if((n2>n1) && (n2>n3))
    {
        printf("%d",n2);
    }
    else
    {
        printf("%d",n3);
    }
}
