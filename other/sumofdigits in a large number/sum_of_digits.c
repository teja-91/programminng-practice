/* This is a program to fnd the sum of digits in number which can have up to fifity digit*/
#include<stdio.h>
#include<string.h>
char int2char(int);
int char2int(char);

int main(int argc,char *argv[])
{
	char num[50];
	/*char *num=realloc(sizeof(char)*argc);*/
	int sum=0,len;
	printf("This is a program to fnd the sum of digits in number which can have up to fifity digit\n");
	printf("please Enter the number\n");
	scanf("%s",&num);
	len=strlen(num);
	for(int i=0;i<len;i++){
		sum=sum+char2int(num[i]);
	}
	
	printf("The sum of digits in the given number is %d",sum);
}

char int2char(int k){
	return (char)(k+'0');
}
int char2int(char ch){
	return (int)(ch-'0');
}

