#include <stdio.h>
char *c(char *d, char *s);
int main()
{
    char src[] = "Hello, Golf!";
    char dest[20];

    c(dest, src);
    printf("Copied string: %s\n", dest);

    return 0;
}