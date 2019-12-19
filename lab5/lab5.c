#include <stdio.h>
#include <string.h> `
#define LEN 100
void reverse(char s[], int n);
void swap(char *g,char *j);
int main()
{
    char s[LEN];
    int c;
    printf("please write some words\n");
    while((s[c]=getchar())!=EOF){
          if(s[c]=='\n'){
              break;
          }
          c++;

    }
    int n;
    n=strlen(s);
    reverse(s,n);
    printf("reverse:%s\n",s);
    return 0;
}
void swap(char *g, char *j)
{
 int temp;
 temp = *g;
 *g = *j;
 *j = temp;
}
void reverse(char s[], int n)
{
 static int i = 0;
 if (i < n-1) {
  swap(&s[i++], &s[n-1]);
  reverse(s, n-1);
 }
}