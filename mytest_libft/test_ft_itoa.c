/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:54:49 by gfantoni          #+#    #+#             */
/*   Updated: 2023/08/02 15:59:17 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	main(void)
{
	int	number[] = {2147483647, -2147483648, 1, -1, 0, 1000034, -10004};
	char	*number_str;	
	int	i;

	i = 0;
	while (i <= 6)
	{
		number_str = ft_itoa(number[i]);
		printf("%s\n", number_str);
		i++;
	}
}
