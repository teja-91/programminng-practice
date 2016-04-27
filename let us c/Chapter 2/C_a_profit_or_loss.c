/* THis progrma gives whther there is profit or loss in a trade*/
#include<stdio.h>

int main(int argc,char *argv[]){
	printf("This program outputs whether there is roofit or loss\n");
	float cp,sp;/* I have chosen the price variables of float type because prices are not always integers*/
	printf("PLease enter the Cost Price\n");
	scanf("%f",&cp);
	printf("Please enter the Selling Price\n");
	scanf("%f",&sp);
	if(sp>cp){
		printf("Profit");}
	else{
		printf("Loss");}
}

