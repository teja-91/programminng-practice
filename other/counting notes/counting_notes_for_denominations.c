/*Given an amount the program will give how many currecny denominations are required for the specified denominations*/
#include<stdio.h>
int main(int argc,char *argv[]){
	int den[10]={0},res[10]={0},amount;
	printf("\n This progrms give  the number of currency notes \n required to total the given amount\n");
	int n;
	printf("Please enter the number of currency denominations\n");
	scanf("%d",&n);
	
	printf("Please enter the currency denominations in decreasing order \n");
	for(int i=0;i<=n-1;i++){
	printf("%d-->",i+1);
	scanf("%d",&den[i]);
	}
	printf("Please enter the amount\n");	
	scanf("%d",&amount);
	for(int i=0;i<=n-1;i++){
	res[i]=amount/den[i];
	amount=amount%den[i];
	}
	printf("\n");
	for(int i=0;i<=n-1;i++){
	printf("The number of %d's required = %d\n",den[i],res[i]);
	}
}

