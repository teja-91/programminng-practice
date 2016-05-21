#include <stdio.h>
#include<limits.h>
#include<math.h>
int count_bits(long long int);
int main()
{
    int T,p;
    long long int N,sum,factor=(pow(10,9)+7),x;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
    	scanf("%llu",&N);
    	sum=0;
    	p=count_bits(N);
    	for(int j=0;j<p;j++){
		for(int k=j+1;k<p;k++){
    	x=pow(2,k)+pow(2,j);
    	if(x>N)
		continue;
		//printf("%llu\n",x);
    	//if(sum>LLONG_MAX||p>9){
    		sum=(sum+x)%factor;
    	//}else{
    	//	  sum=sum+x;
    	}
    	}
		}
    	printf("%llu\n",sum);
    }
    return 0;
}

int count_bits(long long int n){
	int cnt=0;
	while(n>0){
		cnt++;
		n=n>>1;
	}
	return cnt;
}

