/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:05:08 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/22 13:01:48 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	frase[] = "Melvin vive!";
//	size_t	result;
//
//	result = ft_strlen(frase);
//	printf("%ld\n", result);
//	return (0);
//}
