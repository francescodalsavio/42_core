/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <frdal-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:23:54 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/04/03 18:24:16 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg >= '0' && arg <= '9') || (arg >= 'a' && arg <= 'z')
		|| (arg >= 'A' && arg <= 'Z'))
		return (1);
	return (0);
}