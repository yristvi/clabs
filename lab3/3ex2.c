#include <stdio.h>
int main(void)
{
    unsigned int x = 1, bitcount = 0;
    while (x != 0)
    {
        x <<= 1;
        ++bitcount;
    }
    unsigned int m = 1;
    while (m > 0)
    {
        ++m;
    }
    char s[bitcount];
    unsigned int t, i = 0, sum = 0;
    while ((s[i] = getchar()) != EOF && s[i] != '\n')
    {
        i++;
    }
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
    {
        for (i = 2; s[i] != EOF && s[i] != '\n'; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                t = s[i] - '0';
            if (s[i] >= 'a' && s[i] <= 'f')
                t = s[i] - 'a' + 10;
            if (s[i] >= 'A' && s[i] <= 'F')
                t = s[i] - 'A' + 10;
            sum = sum * 16 + t;
        }
    }
    else
    {
        printf("error: the hexadecimal number entered begins with 0x or 0x\n");
        return -1;
    }
    int j;
    char T[22] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'A', 'B', 'C', 'D', 'E', 'F'};
    for (i = 2; s[i] != '\n'; i++)
    {
        for (j = 0; s[i] != T[j] && j <= 21; j++)
            ;
        if (j >= 22)
        {
            printf("error:wrong character entered\n");
            return -1;
        }
    }
    unsigned int u, p;
    for (u = 0, p = m - 1; p != 0; ++u, p = p / 16)
        ;
    if (i <= u + 2)
    {
        printf("Decimal number is:%u\n", sum);
        return 0;
    }
    else
    {
        printf("erroe:the input number is too large. It needs to belong to a number less than:%u\n", m - 1);
        return -1;
    }
}
