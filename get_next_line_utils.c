/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:59:35 by shhidrob          #+#    #+#             */
/*   Updated: 2025/03/16 18:03:42 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t i;
	size_t c;

	if (!s1)
	{
		s1 = malloc(sizeof(char) + 1);
		if (!s1)
			return (0);
		s1[0] = 0;
	}
	str = (char *)malloc(sizeof(char) * ft_strlen(s2) + 1;
	if (!str)
		return (ft_free(&s1));
	i = 0;
	while (s1[i])
		str[i++] = s1[i++];
	c = 0;
	while (s2[c])
		str[i + c] = s2[c]; //no tengo que c++? para que coja todo s2?
	str[i + c] = '\0';
	free(s1);
	return (str);
}

char	*ft_strchr(char *s, int c);
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	return (NULL);
}

size_t	*ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char *s, unsigned int start, size_t len) //NO le tengo q dar valor a len xq en mi ppal function ya le paso el valor
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		dest = malloc(sizeof(char) * (1));
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len && start < ft_strlen(s) && s[start])
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
