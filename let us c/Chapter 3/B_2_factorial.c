/*program to display the factorial of a given number*/
#include<stdio.h>
int main(int argc,char *argv[]){
int num,temp=1;
printf("This program prints the factorial of a number\n");
printf("Please enter the number\n");
scanf("%d",&num);
if(num>0){
for(int i=num;i>0;i--){
	temp=temp*i;}
printf("\t%d!=%d",num,temp);}
else{
printf("Factorial not possible");}
}