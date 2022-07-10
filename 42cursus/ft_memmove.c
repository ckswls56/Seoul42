#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
    char *tmp;
    const char *s;

    tmp = (char *)dest;
    s = (const char *)src;

    if (dest <= src)
    {
        while (n-- > 0)
            *tmp++ = *s++;
    }
    else
    {
        tmp += n;
        s += n;
        while (n-- > 0)
            *--tmp = *--s;
    }

    return dest;
}