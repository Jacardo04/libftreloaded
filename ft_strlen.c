#include "libft.h"
size_t ft_strlen(const char *s)
{
    size_t i;
    i = 0;
    while(s[i] !=  '\0')
        i++;
    return(i);
}
int main(void)
{
    char *s = NULL;
    printf("%zu\n", ft_strlen(s));
    return (0);
}