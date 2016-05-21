#include <stdio.h>

int main()
{
	int T;
	long long int N,cnt;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
    	cnt=0;
    	scanf("%llu",&N);
    	while(N>0){
    		if(N%2==0){
    			cnt=cnt+(N/2);
    			N=N/2;
    		}
    		else{
    		cnt=cnt+((N-1)/2);
    			N=(N+1)/2;
    		}
			printf("%llu %llu\n",cnt,N);
    	}
    	printf("%llu\n",cnt);
    }
    return 0;
}

