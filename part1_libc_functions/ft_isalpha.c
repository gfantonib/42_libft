/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 07:25:57 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/22 15:05:44 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
//	result = ft_isalpha(c);
//	printf("%d\n", result);
//	return (0);
//}
