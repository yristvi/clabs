#include <stdio.h>
#define MAXLINE 1000
int main(void)
{
    char s[MAXLINE];
    char t[MAXLINE];
    int m = 0, n = 0;
    while ((s[m] = getchar()) != ' ')
    {
        m++;
    }
    while (s[m] == ' ' && ((t[n] = getchar()) != '\0') && (t[n] != '\n'))
    {
        n++;
    }
    int i, o, p;
    for (i = m - 1; i > 0; i--)
    {
        for (o = i, p = n - 1; s[o] == t[p]; o--, p--)
            ;
        if (p < 0)
        {
            printf("%d\n", o + 1);
            return i;
        }
    }
    printf("no found"); 
}
