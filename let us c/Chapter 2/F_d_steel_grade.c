/*program to grade the quality of steel*/
#include<stdio.h>
int main(int argc,char *argv[]){
	int hs,ts,cc;
	printf("Program to grade the quality of steel\n");
	printf("Please enter the hardness of steel\n");
	scanf("%d",&hs);
	printf("Please enter the tensile strength of steel\n");
	scanf("%d",&ts);
	printf("Please enter the Carbon content of steel\n");
	scanf("%d",&cc);
	if(hs>50 && cc<0.7 && ts>5600){
		printf("Grade 10");}
		else if(hs>50 && cc<0.7){
		printf("Grade 9");}
		else if(cc<0.7 && ts>5600){
		printf("Grade 8");}
		else if(hs>50 && ts>5600){
		printf("Grade 7");}
		else if(hs>50 || cc<0.7 || ts>5600){
		printf("Grade 6");}
		else{
		printf("Grade 5");}
}