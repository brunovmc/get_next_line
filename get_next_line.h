/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_netxt_line.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <bvidigal@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:50:15 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/27 20:14:46 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GET_NEXT_LINE_H
# define __GET_NEXT_LINE_H
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
int			ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strdup(const char *s1);
char	*ft_strnew(size_t size);
void	ft_strdel(char **s);
int		ft_line_add(char **str, char **line);
int		ft_return(char **str, char **line, int n, int fd);
int			get_next_line(int const fd, char **line);
#endif
