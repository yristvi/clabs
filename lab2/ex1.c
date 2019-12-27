#include <stdio.h>
int bitcount(unsigned x);
int main(void)
{
    unsigned int a = 1;
    while ( a > 0)
    {
        a++;
    }
    printf("unsigned int max = %u\n", a -1);
    printf("The unsigned int bit is %d\n",bitcount(1));
    return 0;
}   
int bitcount (unsigned x)
   {
       int b ;
       for (b = 0; x != 0; x <<= 1)
       b++;
       return b;
}
