/* Program to calculate the sum of digits in a given number*/
#include<stdio.h>
int main(int arc,char *argv[])
{
int n,temp,sum=0;
printf("This is a program to display the sum of sigits in a given number\n");
printf("Please enter the number\n");
scanf("%d",&n);
temp=n;
for(int i=0;temp!=0;i++)
{
sum=sum+(temp%10);
temp=temp/10;
}
printf("The sum of digits in %d id %d",n,sum);
}

