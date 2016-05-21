#include <stdio.h>
int fact(int);
int main()
{
    int T,N,a,x1,x,f;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
    	scanf("%d",&N);
    	x1=0;
    	f=fact(N-1);
    	for(int j=0;j<N;j++){
    		scanf("%d",&a);
    		if(f%2==0){x=0;}else{x=~a;}
    		x1=x1^x;
    	}
    	printf("%d\n",x1);
    }
    return 0;
}
int fact(int x){
	if(x>0)
	x=x*fact(x-1);
	else
	return x;
}

