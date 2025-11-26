#include "libft.h"

char *strlcpy(char * dst, const char * src)
{
    char *tmpdest;
    char *tmpsrc;
    int i;

    tmpdest = (char *)dst;
    tmpsrc = (char *)src;
    i = 0;
    while(tmpsrc[i] != '\0')
    {
        tmpdest[i] = tmpsrc[i];
        i++;
    }
        tmpdest[i] = '\0';
    return(dst);
}
int main(void)
{
    char src[] = "i am goated!";
    char dst[50]; 
    strcpy(dst, src);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);

    return (0);
}