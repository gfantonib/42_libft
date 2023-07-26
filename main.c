#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "Meu nome é Kevin Bohn!";
	char	*str2 = "Meu nome é Kenin Bohn!";

	printf("%d\n", ft_strncmp(str, str2, 10));
	printf("%d\n", strncmp(str, str2, 10));
	return (0);

}
