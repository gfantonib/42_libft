#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	strA[] = "Melvin Vive!";
	char	strB[] = "Benas louco";
	
	printf("before: %s\n", strA);
	ft_memmove(strA + 1, strA, sizeof(strB)); 
	printf("after: %s\n", strA);
	return (0);
}
