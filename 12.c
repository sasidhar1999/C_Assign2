/* 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD */

#include<stdio.h>
int main()
{
    double usd,inr;
    printf("Enter inr amount : ");
    scanf("%lf",&inr);
    usd = inr*76.23;
    printf("Amount in usd is %lf",usd);
    return 0;
}