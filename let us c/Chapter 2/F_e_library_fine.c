/*program to calculate the fine for book returned*/
#include<stdio.h>
int main(int argc,char *argv[]){
int delay;
printf("Pleas eenter the delay in number of days\n");
scanf("%d",&delay);
if(delay<=5){
printf("Fine = %1.1f rupees",delay*0.5);}
else if(delay>5 && delay<=10){
printf("Fine = %d rupees",(delay-5));}
else if(delay>10 && delay<=30){
printf("Fine = %d rupees",(delay-10)*5);}
else{
printf("Your Membership has been cancelled");}
}