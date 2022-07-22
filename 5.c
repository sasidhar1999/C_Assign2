// 5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int num,sum=0,n;
    printf("Enter a number : ");
    scanf("%d",&num);
    do
    {
        n=num%10;
        sum+=n;
        num/=10;
    } while(num>0);
    printf("Sum is %d",sum);
    return 0;
}