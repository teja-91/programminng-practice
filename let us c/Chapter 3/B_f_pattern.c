/* program to pointout the pattern*/
#include<stdio.h>
int main(int argc,char *argv[]){
char ch;
int len,row,n;
printf("enter number of characters\n");
scanf("%d",&n);
len=2*n+1;
row=n+1;
for(int j=0;j<row;j++){
	ch='A';
for(int i=0;i<len;i++){
	if(i<=n-j){
		printf("%c",(char)(ch+i));}
	else if(i>=n+j){
		printf("%c",(char)(ch+len-i-1));}
	else
		printf(" ");
}
printf("\n");
}
}



