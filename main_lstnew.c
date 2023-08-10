/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:34:53 by gfantoni          #+#    #+#             */
/*   Updated: 2023/08/10 09:34:54 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
