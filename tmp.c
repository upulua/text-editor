#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <inttypes.h>
#include <string.h>

int main(void)
{
    char c = ' ';
    c = getchar();
    while (c != '\n' && c != EOF)
    {
        if (c <= 'Z' && c >= 'A')
            printf("_%c", c - 'A' + 'a');
        else
            printf("%c", c);
        c = getchar();
    }
    printf("\n");
    return 0;
}