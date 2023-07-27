#include "libft.h"
#include <stdio.h> 
#include <string.h> 
 
int	main(void)
{
	char 	*s = "Melvin in the Z land";
	char	c = 'Z';
	int	n = 20;

	printf("%s\n", memchr(s, c, n));
	return (0);

}

