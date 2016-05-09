#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,tmp,d; 
    scanf("%d",&t);
    long long int n[t];
    int cnt;
    for(int a0 = 0; a0 < t; a0++){
        scanf("%lli",n+a0);
    }
    for(int i=0;i<t;i++){
        tmp=n[i];
        cnt=0;
        while(tmp>0){
            d=tmp%10;
            if(d!=0)
            cnt+=((n[i]%d==0)?1:0);
            tmp=tmp/10;
        }
      printf("%d\n",cnt);  
        
    }
    return 0;
}

