#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1000],ch;
    int alpha[26]={0};
	scanf("%[^\n]", str);
    for(int n=0;n<strlen(str);n++){
	ch=(str[n]>='a'&&str[n]<='z')?str[n]:((str[n]>='A'&&str[n]<='Z')?str[n]+32:'1');
        if(ch!='1'){
            alpha[ch-'a']++;
        }
    }
    for(int n=0;n<26;n++){
        if(alpha[n]<1){
            printf("not pangram");
            return 0;
        }
        
    }
    printf("pangram");        
    return 0;
}

