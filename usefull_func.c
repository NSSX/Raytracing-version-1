/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 15:29:08 by avella            #+#    #+#             */
/*   Updated: 2016/03/19 15:29:27 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_h.h"

int		event_mlx(int keycode, t_main *main)
{
	if (keycode == 53)
		exit(1);
	return (0);
}

double	mypow(int a, int n)
{
	double	res;
	int		i;

	i = 1;
	res = a;
	while (i < n)
	{
		res = res * a;
		i++;
	}
	return (res);
}
