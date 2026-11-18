#include <unistd.h>

void ft_print_limited_alphabet(char end)
{
    int index;

    index = 0;

    while (index < (end - 'a'))
    {
        char letter;

        letter = index + 'a';        
        write(1, &(letter), 1);
        index++;
    }
}
