#include "libft.h"
int ft_isdigit(int c)
{
    if (c >= 49 && c <= 57)
        return (1);
    return (0);
}

// int main(void)
// {
//     int c = '3';
//     printf("%d\n", ft_isdigit(c));
//     return (0);
// }