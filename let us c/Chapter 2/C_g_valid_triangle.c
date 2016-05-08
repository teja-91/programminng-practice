/* this progeam is used to validate wehter a triangle with the given angles is a valid triangle*/
#include<stdio.h>
int main(int agc,char *argv[]){
int sum,a,b,c;
printf("This program is usedto test whether the angles in a given triangle is valid\n");
printf("Please enter the angles of the triangle\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
sum=a+b+c;
if(sum!=180)
printf("The given triangle is not valid");
else
printf("The given triangle is valid");
}

