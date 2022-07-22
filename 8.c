// 8. Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>
int main()
{
    int num,lsb;
    printf("Enter a number : ");
    scanf("%d",&num);
    lsb=num%2;
    if(lsb&1)
    printf("%d is odd",num);
    else
    printf("%d is even",num);
    return 0;
}