/*Program to find whether an entered character is capital or small or special symbol*/
#include<stdio.h>
int main(int argc,char *argv[]){
	char ch;
	printf("Program to display the type of character entered\n");
	printf("Please enter the character\n");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'){
	printf("%c is a Capital Letter",ch);}
	else if(ch>='a'&&ch<='z'){
	printf("%c is a Small Letter",ch);}
	else if(ch>='0'&&ch<='9'){
	printf("%c is a Number",ch);}
	else{
	printf("%c is a Special Character",ch);}
}

