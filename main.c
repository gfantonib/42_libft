#include "libft.h"
#include <fcntl.h>
int	main(void)
{
	int	n = 2147483647;
	int	fd;

	fd = open("melvin.txt", O_WRONLY);
	ft_putnbr_fd(n, fd);
	return (0);
}
