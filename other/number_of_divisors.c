#include <stdio.h>


int main(){

	int l,r,k,cnt=0;
	scanf("%d",&l);
	scanf("%d",&r);
	scanf("%d",&k);
    for(int i=l;i<=r;i++){
    	if(i%k==0)
    	cnt++;}
    printf("%d",cnt);
    return 0;
}

