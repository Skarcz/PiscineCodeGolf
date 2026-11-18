#include <unistd.h>
void ft_print_limited_alphabet(char end);

int main(void)
{
    ft_print_limited_alphabet('z');
    write(1, "\n", 1);
    ft_print_limited_alphabet('f');
    write(1, "\n", 1);
    ft_print_limited_alphabet('m');
    write(1, "\n", 1);
    return 0;
}