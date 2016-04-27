/*This program is used to reverse the given number and check whether the given number and*/
/*reversed number are equal*/
#include<stdio.h>
int main(int argc,char *argv[]){
	int num,temp=0,num1;
	printf("\n This program is used to reverse the digits in the givne number\n");
	printf("and check whether the given number and reversed number are equal\n");
	printf("Please enter the number\n");
	scanf("%d",&num);
	num1=num;
	for(int i=0;num!=0;i++){
		temp=temp*10+(num%10);
		num=num/10;
	}
	if(temp!=0){
		if(num1==temp){
			printf("The given number is polyndrom");}
		else{
			printf("The given number is not polyndrom");}}
	else{
	printf("The given number is zero");}

}

