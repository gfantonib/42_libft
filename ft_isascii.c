/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:40:32 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/22 15:06:01 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

//#include <stdio.h>
//int	main(void)
//{
//	int	c;
//	int	result;
//
//	c = 'H';
//	result = ft_isascii(c);
//	printf("%d\n", result);
//	return (0);
//}
