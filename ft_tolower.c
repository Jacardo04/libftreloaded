#include "libft.h"

int ft_tolower(int c)
{
    if(c >= 65 && c <= 90)
    {   
        c += 32;
        return(c);
    }
    return(0);
}
int main(void)
{
    int c = 'g';
    printf("%c\n", ft_tolower(c));
    return (0);
}