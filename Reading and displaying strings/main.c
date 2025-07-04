#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s [100] = " Hello";
    printf("%s\n", s);
    printf("Please input a word not longer than 99 characters: ");
    scanf("%s", s);
    printf("%s\n", s);
    return 0;
}
