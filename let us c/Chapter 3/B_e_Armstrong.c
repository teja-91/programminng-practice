/*program to find the angstorm numbers from 1 to 500*/
#include<stdio.h>
#include<math.h>
int main(int argc,char *argv[]){
int tmp,sum;
printf("This program displays the armstrong number from 1 to 500\n");
for(int num=104;num<=500;num++){
	tmp=num;
	sum=0;
	while(tmp>0){
		sum=sum+pow((tmp%10),3);
		tmp=tmp/10;
		}
	if(sum==num){
		printf("%d\n",num);
	}
}}