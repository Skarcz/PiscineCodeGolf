#include <stdio.h>
char *ft_strcpy(char *dest, char *src);
int main()
{
    char src[] = "Hello, Golf!";
    char dest[20];

    ft_strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    return 0;
}