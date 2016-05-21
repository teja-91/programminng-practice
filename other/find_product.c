#include <stdio.h>
#include<math.h>
int main(){

	int a[1001],N;
	long long int product=1,factor=(pow(10,9)+7);
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",(a+i));
		product=((product*a[i])%factor);}
	
   printf("%d",product);
    return 0;
}

