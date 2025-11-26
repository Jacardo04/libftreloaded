#include "libft.h"
#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

// int main(void)
// {
//     int c = 65;
//     printf("%d\n", ft_isalpha(c));
//     return (0);
// }