#include <stdio.h>
int main()
{
    char fn[100];
    printf("ENTER YOUR FULL NAME (IN CAPITAL LETTERS)\n");
    fgets(fn, sizeof(fn), stdin);
    return 0;
}