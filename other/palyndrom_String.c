#include <stdio.h>
#include <string.h>
int main(){

    char str[100];
    int k=strlen(str);
	scanf("%s",str);
    for(int i=0;i<(int)(k/2);i++){
    	if(str[i]!=str[k-i-1]){
    		printf("NO");
    		return 0;}}
    	
    
    printf("YES");
    return 0;
}

