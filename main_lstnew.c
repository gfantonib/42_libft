#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*wtf;
	char	*next_str = "Melvin morre!";

	wtf = ft_lstnew(next_str);
	printf("%s\n", wtf->content);
	printf("%p\n", wtf->next);
	printf("%p\n", wtf);
	return (0);

}
