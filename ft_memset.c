#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp;

    tmp = (unsigned char *)b;
 while(len > 0)
 {
    *tmp = (unsigned char)c;
    tmp++;
    len--;
 }
return (b);
}

int main(void)
{
    char str[20] = "Hello, world!";

    printf("Before: %s\n", str);

    // Set the first 5 bytes to '*'
    ft_memset(str, 'w', 5);

    printf("After:  %s\n", str);

    // You can also test it on raw memory (not just strings)
    int numbers[5] = {1, 2, 3, 4, 5};
    ft_memset(numbers, 0, sizeof(numbers));

    printf("After memset on int array: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    return 0;
}