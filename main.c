#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "Melvin Vive!";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
	return (0);
}
