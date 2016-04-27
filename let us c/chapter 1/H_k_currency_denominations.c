/*Given an amount the program will give ow many currecny denominations are required in tens fifties and hundreds*/
#include<stdio.h>
int main(int argc,char *argv[]){

	int den[]={100,50,10},res[3]={0},amount;
	printf("\n This progrms give  the number of currency notes \n required to total the given amount\n");
	printf("Please enter the amount\n");
	scanf("%d",&amount);
	for(int i=0;i<=2;i++){
	res[i]=amount/den[i];
	amount=amount%den[i];
	}
	printf("\n");
	for(int i=0;i<=2;i++){
	printf("The nuber of %d's required = %d\n",den[i],res[i]);
	}
}

