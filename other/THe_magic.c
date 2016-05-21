#include <stdio.h>

int main()
{
    int T;
     int N[100001];
     scanf("%d",&T);
     for(int i=0;i<T;i++){
     	scanf("%llu",N+i);
     }
     
     for(int i=0;i<T;i++){
     	if(N[i]%2==0)
     	printf("%llu\n",(N[i]/2));
     	else
     	printf("%llu\n",(N[i]+1)/2);
     }
    return 0;
}

