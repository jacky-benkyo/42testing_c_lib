/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:31:39 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 17:48:06 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int word_count(const char *str, char c);
static char *fill_word(const char *str, int start, int end);
static void *ft_free(char **strs, int count);

char	**ft_split(const char *s, char c)
{
    char **res;
    size_t i;
    int j;
	size_t result;
	size_t s_word;

	j = 0;
	i = 0;
	result = 0;
	s_word = 0;
	if(!s)
		return (NULL);
	result = word_count(s, c); //until delimter
	s_word = ft_strlen(s);
	if (result == 0)
		res = NULL;
	else
	{
		res = ft_calloc((result), sizeof(char *));
		if (!res)
			return (NULL);
		while (i <= result)
		{
			if ((s[i] != c) &&(s_word < 0))
				s_word = i;
			else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)
			{
				res[j] = fill_word(s, s_word, i);
				if (!(res[j]))
					return (ft_free(res, j));
				s_word = -1;
				j++;
			}
			i++;
		}
	}
    return (res);

}
 //search result
	//search if char c is in str
	//allocate memory
	//copy the char to a pointer
	//return the splited word


static void	*ft_free(char **strs, int count)
{
    int i;

    i = 0;
    while (i< count)
    {
        free(strs[i]);
        i++;
    }
    free(strs);
    return (NULL);
}

static char	*fill_word(const char *str, int start, int end)
{
    char *word;
    int i;

    i = 0;
    word = malloc(sizeof(char)*(end - start + 1));
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

static int	word_count(const char *str, char c)
{ // Return the number of words to be splited
	int word;
    int count;
	count = 0;
	word = 0;
    while (*str)
    {
		if (*str != c)
			word = 0;
		if ((*str == c) && (word == 0))
		{
			word = 1;
			count++;
		}
	str++;
	}
    return (count);
}
