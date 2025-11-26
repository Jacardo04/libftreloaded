#include "libft.h"
int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}

int main(void)
{
    int c = 65;
    int s = '2';
    printf("%d\n", ft_isalnum(c));
    printf("%d\n", ft_isalnum(s));
    return (0);
}