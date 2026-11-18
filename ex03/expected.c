#include <unistd.h>

void ft_pyramid(unsigned int n)
{
    unsigned int row;
    unsigned int total_rows;
    unsigned int numbers_to_print;

    total_rows = (2 * n) - 1;
    row = 1;
    
    while (row <= total_rows)
    {
        if (row <= n)
        {
            numbers_to_print = row;
        }
        else
        {
            numbers_to_print = total_rows - row + 1;
        }

        write(1, "123456789", numbers_to_print);
        write(1, "\n", 1);

        row++;
    }
}