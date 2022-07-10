#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *a1;
    unsigned char *a2;

    a1 = (unsigned char *)s1;
    a2 = (unsigned char *)s2;
    while (n-- > 0)
    {
        if (*a1 != *a2)
            return (*a1 - *a2);
        a1++;
        a2++;
    }
    return (0);
}