#include "libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *tempd;
    const char *temps;

    tempd = dst;
    temps = src;
    i = -1; //-1 so that when we enter the loop its set to 0//
    if(dst == NULL && src == NULL)
        return(dst);
    while(++i < n)//++i so going into the loop i = 0 saves max 1 line but hey why not //
        tempd[i] = temps[i];
    return (dst);
}

// int main (void)
// {
// 	char *src = "goat";
// 	char dst[5];
// 	printf("before memcpy %s \n",src);
// 	ft_memcpy(dst,src,5);
// 	printf("source %s\ndest %s",src, dst);
// 	return(0);
// }