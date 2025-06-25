#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[10] = "Hello";
   printf("%s\n", s);
   s [5] = s [6] = '!';
   s [7] = '\0';
   printf("%s",s);
    return 0;
}
