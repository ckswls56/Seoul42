#include "libft.h"

void *ft_bzero(void *s, size_t n)
{

    unsigned char *temp;

    temp = (unsigned char *)s;

    while (n-- > 0)
    {
        *temp++ = 0;
    }
    return s;
}