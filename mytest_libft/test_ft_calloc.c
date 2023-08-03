/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:52:11 by gfantoni          #+#    #+#             */
/*   Updated: 2023/08/03 17:28:29 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	main(void)
{
	int	mtypes[] = {sizeof(double), sizeof(long double), sizeof(int), 
				sizeof(unsigned int), sizeof(char),
				sizeof(unsigned char)};
	void	*memory;
	int	i;

	i = 0;
	while(i <= 5)
	{
		memory = ft_calloc(10, mtypes[i]);
		if (!memory)
			printf("KO");
		if(memory)
			printf("OooK");
		printf("\n");
		i++;
	}
	return (0);
}
	
