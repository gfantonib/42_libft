/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:57:04 by gfantoni          #+#    #+#             */
/*   Updated: 2023/08/04 12:24:28 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static int	ft_wordcount(char const *s, char c)
//{
//	int	i;
//	int	count;
//
//	i = 0;
//	count = 0;
//	while (s[i])
//	{
//		while (s[i] == c)
//			i++;
//		if (s[i] != c && s[i])
//			count++;
//		while (s[i] != c && s[i])
//			i++;
//	}
//	return (count);
//}
//
//static int	ft_wordsize(char const *str, char c)
//{
//	int	i;
//	int	len;
//
//	i = 0;
//	len = 0;
//	while (str[i] == c)
//		i++;
//	while (str[i] != c && str[i] != '\0')
//	{
//		i++;
//		len++;
//	}
//	return (len);
//}
//
//static char	**split(char const *s, char c)
//{
//	char	**mem;
//	int		i;
//	int		j;
//	int		k;
//
//	i = -1;
//	j = 0;
//	mem = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
//	if (!s || !c || !mem)
//		return (NULL);
//	while (ft_wordcount(s, c) > ++i)
//	{
//		k = 0;
//		mem[i] = (char *)malloc(sizeof(char) * (ft_wordsize(&s[j], c) + 1));
//		if (!mem[i])
//			return (NULL);
//		while (s[j] == c)
//			j++;
//		while (s[j] != c && s[j])
//			mem[i][k++] = s[j++];
//		mem[i][k] = '\0';
//	}
//	mem[i] = 0;
//	return (mem);
//}
//
//char	**ft_split(char const *s, char c)
//{
//	if (!s || !c)
//		return (NULL);
//	return (split(s, c));
//}
static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab_p;
	char const	*tmp;

	tmp = s;
	tab_p = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab_p;
		}
	}
	*tab_p = NULL;
}

static int	ft_count_words(char const *s, char sep)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != sep)
			++s;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_allocate(new, s, c);
	return (new);
}
