/* program to find the power of one number to another*/
/*n1^n2*/
#include<stdio.h>
int main(int argc,char *argv[]){
int pow=1,temp,n1,n2;
printf("This program displays the power of one number to another\n");
printf("enter the two numbers\n");
scanf("%d",&n1);
scanf("%d",&n2);
temp=n2;
if(temp>0){
while(temp>0){
	pow=pow*n1;
	temp--;
}
printf("%d^%d=%d",n1,n2,pow);}
else{
printf("power can not be less than zero");}

}