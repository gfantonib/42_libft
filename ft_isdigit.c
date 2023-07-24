/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 07:31:48 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/22 15:06:21 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

//#include <stdio.h>
//int	main(void)
//{
//	int	c;
//	int	result;
//
//	c = '1';
//	result = ft_isdigit(c);
//	printf("%d\n", result);
//	return (0);
//}
