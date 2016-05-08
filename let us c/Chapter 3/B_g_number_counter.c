/*number counter counts the number of positive negative and zeros entered*/
#include<stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
int pos=0,neg=0,zr=0,num,tmp;
printf("This program counts the number of positive negative and zeros\n");
printf("ifyou want to stop counting enter 1234\n");
while(1){
scanf("%d",&num);
if(num!=1234){
	
	tmp=(num%2==0);
	pos+=tmp;
	neg+=(!tmp);
	zr+=(num==0);} 
else{
	printf("no. of postive numbers =%d\n",pos);
	printf("no. of negative numbers =%d\n",neg);
	printf("no. of zeros =%d\n",zr);
	return 1;}
}
}