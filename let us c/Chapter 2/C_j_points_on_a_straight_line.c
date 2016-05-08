/*this program is used to check whether the given points form a straight line*/

#include<stdio.h>
int main(int argc,char *argv[]){
int x[3],y[3],s1,s2;
printf("This program is used to find whether the given points fall in a straight line\n");
printf("Please enter the coordinates for each point\n");
for(int i=0;i<3;i++){
printf("enter\n");
scanf("%d",&x[i]);
scanf("%d",&y[i]);}
s1=(y[1]-y[0])/(x[1]-x[0]);
s2=(y[2]-y[1])/(x[2]-x[1]);
if(s1==s2)
printf("the given points form a straight line\n");
else
printf("the given points do not form a straight line\n");
}

