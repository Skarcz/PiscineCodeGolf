#include <unistd.h>

void ft_reverse_putnbr(unsigned int n)
{
    unsigned int digit;
    char character;

    if (n == 0)
    {
        write(1, "0", 1);
    }
    else
    {
        while (n > 0)
        {
            digit = n % 10;
            character = digit + '0';

            write(1, &character, 1);

            n = n / 10;
        }
    }

    write(1, "\n", 1);
}