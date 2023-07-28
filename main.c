#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	*result;
	char	*pre = "Eu não sei seu nome inteiro";
	char	*su = "Eo";

	result = ft_strtrim(pre, su);
	printf("%s\n", result);
	return (0);
}
