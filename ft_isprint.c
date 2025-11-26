#include "libft.h"

int ft_isprint(int c)
{
    if(c >= 32 && c <= 176)
        return(1);
    return(0);
}
int main(void)
{
    int c = ';';
    printf("%d\n", ft_isprint(c));
    return (0);
}