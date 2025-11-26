#include "libft.h"

int ft_toupper(int c)
{
    if(c >= 97 && c <= 122)
    {  
        c -= 32;
        return(c);
    }
    return(0);
}
int main(void)
{
    int c = 'g';
    printf("%c\n", ft_toupper(c));
    return (0);
}