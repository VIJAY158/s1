#include<stdio.h>
void main()
{
    char c;
    printf("Enter the character:\n");
    scanf("%c",&c);
    if((c>='a' && c<= 'z')||(c>='A' && c<='Z'))
    {
        printf("Alphabet\n");
    }
    else
    {
        printf("Not a alphabet");
    }
}
