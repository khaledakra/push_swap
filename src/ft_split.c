/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakra <kakra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 05:32:19 by kakra             #+#    #+#             */
/*   Updated: 2024/07/09 22:35:31 by kakra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int	countwords(char *str, char sep)
{
	bool	in;
	int		len;

	len = 0;
	while (*str)
	{
		in = false;
		while (*str == sep && *str)
			str++;
		while (*str != sep && *str)
		{
			if (!in)
			{
				in = true;
				len++;
			}
			str++;
		}
	}
	return (len);
}

static char	*get_next_word(char *str, char separator)
{
	static int	cursor = 0;
	char		*next_str;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (str[cursor] == separator)
		++cursor;
	while ((str[cursor + len] != separator) && str[cursor + len])
		++len;
	next_str = malloc((size_t)len * sizeof(char) + 1);
	if (NULL == next_str)
		return (NULL);
	while ((str[cursor] != separator) && str[cursor])
		next_str[i++] = str[cursor++];
	next_str[i] = '\0';
	return (next_str);
}

char	**ft_split(char *str, char separator)
{
	int		words_number;
	char	**strings;
	int		i;

	i = 0;
	words_number = countwords(str, separator);
	if (!words_number)
		exit(1);
	strings = malloc(sizeof(char *) * (size_t)(words_number + 2));
	if (strings == NULL)
		return (NULL);
	while (words_number-- >= 0)
	{
		if (i == 0)
		{
			strings[i] = malloc(sizeof(char));
			if (strings[i] == NULL)
				return (NULL);
			strings[i++][0] = '\0';
			continue ;
		}
		strings[i++] = get_next_word(str, separator);
	}
	strings[i] = NULL;
	return (strings);
}

long	ft_atol(char *str)
{
	long	num;
	int		isneg;
	int		i;

	isneg = 1;
	num = 0;
	i = 0;
	while (str[i] && ((str[i] >= 7 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * isneg);
}
