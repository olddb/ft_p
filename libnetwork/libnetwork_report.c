/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnetwork_report.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/06 19:14:41 by vpailhe           #+#    #+#             */
/*   Updated: 2015/06/06 19:14:43 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnetwork.h"

int		report(int err, int socket)
{
	if (err == 1)
	{
		ft_putendl("get : File doesn't exist, Dick Head !");
		send(socket, "", 1, 0);
	}
	if (err == 2)
	{
		ft_putendl("put : File doesn't exist, Dumb ass !");
		send(socket, "", 1, 0);
	}
	return (-1);
}
