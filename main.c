#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "O estrago será na carne do inimigo e o sangue será tomado ainda quente!";
	char	src[] = "Melvin...";
	size_t	result;
	result = ft_strlcat(dest, src, 10);
	printf("%ld\n", result);
	return (0);
}
