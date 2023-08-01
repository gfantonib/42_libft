#include "libft.h"
#include <stdio.h>

int             main(void)
{
        char    *ptr;
        char    **new;

        ptr = "this*is**my***string";

        new = (ft_strsplit(ptr, '*'));
        printf("%s\n%s\n%s\n\%s\n" , new[0], new[1], new[2],  new[3]);
        return (0);
}

