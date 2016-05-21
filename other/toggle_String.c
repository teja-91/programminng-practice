#include <stdio.h>
int main()
{
	char st[101];
    scanf("%s",st);
    for(int i=0;st[i]!='\0';i++)
    {
    	if(st[i]>='A' && st[i]<='Z')
    	
    		st[i]=(st[i]+32);
    	else
    		st[i]=(st[i]-32);
    }	 
    
    printf("%s",st);
    return 0;
}

