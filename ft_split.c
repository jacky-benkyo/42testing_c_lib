/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yichow <yichow@student.42heilbronn.de>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 15:31:39 by yichow           #+#    #+#              */
/*   Updated: 2026/11/22 15:22:03 by yichow          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c);
static char	*fill_word(const char *str, int start, int end);
static void	*ft_free(char **strs, int count);
static char	**split_words(char **res, const char *s, char c, size_t len);
char		**ft_split(const char *s, char c);

static int	word_count(const char *str, char c)
{
	int	word;
	int	count;

	count = 0;
	word = 0;
	while (*str)
	{
		if (*str == c)
			word = 0;
		else if ((*str != c) && (word == 0))
		{
			word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	**split_words(char **res, const char *s, char c, size_t len)
{
	size_t	i;
	int		j;
	int		s_word;

	i = 0;
	j = 0;
	s_word = -1;
	while (i <= len)
	{
		if (s[i] != c && s_word < 0)
			s_word = i;
		else if ((s[i] == c || i == len) && s_word >= 0)
		{
			res[j] = fill_word(s, s_word, i);
			if (!res[j])
				return (ft_free(res, j));
			s_word = -1;
			j++;
		}
		i++;
	}
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		word_check;

	if (!s)
		return (NULL);
	word_check = word_count(s, c) + 1;
	res = ft_calloc(word_check, sizeof(char *));
	if (!res)
		return (NULL);
	return (split_words(res, s, c, ft_strlen(s)));
}
