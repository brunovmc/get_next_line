/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_netxt_line_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <bvidigal@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:50:01 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/27 19:50:03 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(const char *s)
{
	int	i;

	i = 0;
  if (s == NULL)
	 	return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*scpy;

	scpy = (char *)s;
	i = 0;
	len = ft_strlen(scpy);
	if (c == '\0')
		return (&scpy[len]);
	while (scpy[i] != '\0')
	{
		if (scpy[i] == c)
			return (&scpy[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*sjoin;
	size_t	size;
	size_t	i;
	size_t	j;

	if (s1 == 0 || s2 == 0)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	sjoin = malloc(size * sizeof(char));
	if (sjoin == 0)
		return (0);
	i = 0;
	while (i < (size_t)ft_strlen(s1))
	{
		sjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < (size_t)ft_strlen(s2))
	{
		sjoin[i + j] = s2[j];
		j++;
	}
	sjoin[i + j] = '\0';
	return (sjoin);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	start_copy;

	start_copy = ((size_t)start);
	if (s == 0)
		return (0);
	sub = malloc((len + 1) * sizeof(char));
	if (sub == 0)
		return (0);
	i = 0;
	while (i < len && start_copy < (size_t)ft_strlen(s))
	{
		sub[i] = s[start_copy + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}


char	*ft_strdup(const char *s1)
{
	char	*s1_copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	s1_copy = malloc((len + 1) * sizeof(char));
	i = 0;
	if (s1_copy == 0)
		return (0);
	while (i < len)
	{
		s1_copy[i] = s1[i];
		i++;
	}
	s1_copy[i] = '\0';
	return (s1_copy);
}
