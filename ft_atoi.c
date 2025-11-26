#include "libft.h"

int ft_whitespace(int c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return(1);
    return 0;
}

int ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    sign = 1;
    result = 0;
    i = 0;


    while(ft_whitespace(str[i]))
    {
        i++;
    if (str[i] == '-')
     {
         sign = -1;
        i++;
     }
    }
    while(str[i] && ft_isdigit(str[i]))
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return(result * sign);
}

