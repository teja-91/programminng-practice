#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int a[3];
    int n,t;
    scanf("%lli",a);
    scanf("%lli",a+1);
    scanf("%d",&n);
    while(n>2){
        a[2]=pow(a[1],2)+a[0];
        a[0]=a[1];
        a[1]=a[2];
        n--;
    }
    printf("%lli",a[2]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

