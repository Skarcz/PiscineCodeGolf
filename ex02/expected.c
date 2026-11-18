#include <unistd.h>

void ft_staircase(unsigned int n)
{
    unsigned int row;
    unsigned int collumn;
    char character;

    row = 1;
    while (row <= n)
    {
        collumn = 1;
        while (collumn <= row)
        {
            character = '0' + collumn;
            write(1, &character , 1);
            collumn++;
        }
        write(1, "\n", 1);
        row++;
    }
}