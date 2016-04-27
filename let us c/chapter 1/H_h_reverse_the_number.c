/*This program is used to reverse the given number*/
#include<stdio.h>
int main(int argc,char *argv[]){
int num,temp=0;
printf("\n THis program is used to reverse the digits in the givne number\n");
printf("Please enter the number\n");
scanf("%d",&num);
for(int i=0;num!=0;i++){
temp=temp*10+(num%10);
num=num/10;
}
printf("Flipped version of the given number is %d",temp);
}

