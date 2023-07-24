/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 07:50:09 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/22 15:05:28 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || 
		(c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

//#include <stdio.h>
//int	main(void)
//{
//	int	c;
//	int	result;
//
//	c = '+';
//	result = ft_isalnum(c);
//	printf("%d\n", result);
//	return (0);
//}
