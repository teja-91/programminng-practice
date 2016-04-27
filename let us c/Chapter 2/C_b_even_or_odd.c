/* This programs outputs whether a given number is even or odd*/
#include<stdio.h>
int main(int argc, char *argv[]){
	int num;
	printf("This program outputs whether a given number is even or odd\n");
	printf("Please enter the number\n");
	scanf("%d",&num);
	if(num!=0){
		if(num%2==0){
			printf("Even number");
		}else{
			printf("odd number");}}
	else{
	printf("Given number is zero");}
}

