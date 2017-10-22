#include<stdio.h>
void main()
{
    char s[10]="Hello";
    int n,i;
    printf("Enter how many times you want to print:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%s\n",s);
    }
}
