/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:10 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/22 15:06:46 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= '!' && c <= '~')
		return (1);
	return (0);
}

//#include <stdio.h>
//int	main(void)
//{
//	int	c;
//	int	result;
//
//	c = '!';
//	result = ft_isprint(c);
//	printf("%d\n", result);
//	return (0);
//}
