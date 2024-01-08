#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter where upto even numbers should be printed\n");
    scanf("%d",n);
    for(;i<=n;)
    {
        printf("The even numbers are: %d",i);
    }
}