#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void pw_triangle(void)
{
    int i = 1;
    while (i <= 3)
    {
        int j = 0;
        while (j < i)
        {
            ft_putchar('a');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

