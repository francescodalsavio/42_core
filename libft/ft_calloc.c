/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <frdal-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:23:52 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/04/03 18:41:09 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*str;

	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	i = 0;
	ft_bzero(str, size * nmemb);
	return (str);
}
