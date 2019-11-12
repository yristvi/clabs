#include <stdio.h>
int strindex(char s[],char t[]);
int strindex(char s[],char t[]){
    int i,k,pos;
    pos=-1;
    for(i = 0;s[i]!='\0';i++)
    {
        for (k=0;t[k]!='\0'&&t[k]==s[i];k++)
        {
            pos=i;
        }
    }
    return pos;
}