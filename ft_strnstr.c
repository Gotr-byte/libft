#include "libft.h"
#include <string.h>
#include <stdlib.h>

size_t    ft_strlenn(const char *s)
{
    size_t    k;

    k = 0;
    while (*(s + k) != '\0')
    {
        k++;
    }
    return (k);
}

char    *ft_strchrr(const char *s, size_t c)
{
    size_t    l;
    char    *h;
    size_t    t;

    t = ft_strlenn(s);
    h = (char *)s;
    l = 0;
    while (l <= t)
    {
        if (*(h + l) == (char)c)
            return (h + l);
        l++;
    }
    return (0);
}


char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t    i;
    size_t    j;
    size_t    t;
    
    t = ft_strlenn(needle);
    i = 0;
    j = 0;
    if (!*needle)
        return ((char *)haystack);
    while (i < n && haystack[i] != '\0')
    {
        if(ft_strchrr(haystack+i, *(needle + j) ))
            {
                while(haystack[j + i] == needle[j])
                    {
                        
                        j++;
                        if (j == t)
							return ((char *)haystack + i);
                    }
                j = 0;
                i++;
            }
    }
    return (NULL);
}

/*
int    main(void)
{
    char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
    // char *c;
    // char *co;
    
    // c = 
    // co = strnstr(haystack, needle, -1);
    printf("ft_strnstr:    %s\n", ft_strnstr(haystack, needle, -1));
//    printf("Dft_strnstr:    %s\n", Dft_strnstr(haystack, needle, -1));
    printf("strnstr:    %s\n",strnstr(haystack, needle, -1));

}
*/