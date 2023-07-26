#include "libft.h"
#include <stdio.h> 
#include <string.h> 
 
int     main(void) 
{ 
        char    *str = "Meu nome é Kevin Bohn!"; 
        char    c = 'M'; 
 
        printf("%s\n", str); 
        printf("%s\n", strrchr(str, c)); 
        return (0); 
} 

