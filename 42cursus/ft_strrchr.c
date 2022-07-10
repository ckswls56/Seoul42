#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *last = 0;

    while (*s++)
    {
        if (*s == (char)c)
            last = (char *)s;
    }
    return (last);
}