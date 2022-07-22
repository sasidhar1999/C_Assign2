// 2. Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int num,num1;
    printf("Enter a number : ");
    scanf("%d",&num);
    num1=num/10;
    printf("Output is %d",num1);
    return 0;
}