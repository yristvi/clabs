#include <stdio.h>
int main()
{
    printf("lab\n");
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 100;
    step = 5;
    celsius = lower;
    printf("celsius\fahr\n");
    while (celsius<=upper){
        fahr = (9.0*celsius)/5.0+32.0;
        printf("%d\t%d\n",celsius,fahr);
        celsius=celsius+step;
    }
}
