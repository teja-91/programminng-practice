/*This program is used to find the sum of the forst and last digits in given number*/
#include<stdio.h>
int main(int argc,char *argv[]){
	int num1,num,sum=0;
	printf("\nThis program is used to find the sum of the first and last digit in a given number\n");
	printf("Please enter the number\n");
	scanf("%d",&num1);
	num=num1;
	sum=num%10;
	for(int i=0;;i++){
		num=num/10;
		if(num/10==0)
		{sum=sum+num;

		break;}
	}

	printf("the sum of first and last digits in %d is %d",num1,sum);
}


