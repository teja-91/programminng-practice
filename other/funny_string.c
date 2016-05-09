#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,len;char str[10][10001];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%d",&n);
    int ord;
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);    
    }
    
    for(int k=0;k<n;k++){
         len=strlen(str[k])-1;
        ord=0;
    for(int i=1;i<len;i++){
        if(abs(str[k][i]-str[k][i-1])!=abs(str[k][len-i]-str[k][len-i+1])){
            ord++;
            break;
        }        
    }
        if(ord)
            printf("Not Funny\n");
        else
            printf("Funny\n");
    }
   
    return 0;
}

