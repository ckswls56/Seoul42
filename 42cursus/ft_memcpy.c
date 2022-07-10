#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *tmp;
    const char *s;

    tmp = dest;
    s = src;

    while (n-- > 0)
        *tmp++ = *s++;

    return dest;
}