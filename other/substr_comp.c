#include <stdio.h>
#include<string.h>
int main()
{
	int T,cnt=0;
	char s1[100000],s2[100000];
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%s",s1);
		scanf("%s",s2);
		for(int j=0;j<strlen(s1);j++)
		{
			if(strchr(s2,s1[j])!=NULL){
				cnt++;
			}
		}
		if(cnt)
		printf("NO\n");
		else
		printf("YES\n");
	}
    return 0;
}

