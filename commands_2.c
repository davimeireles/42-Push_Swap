/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:23:36 by dmeirele          #+#    #+#             */
/*   Updated: 2023/12/29 02:00:39 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	rrr(t_stack **sa, t_stack **sb, char *str)
{
	str = NULL;
	rrx(sa,str);
	rrx(sb,str);
	str = "rrr";
	ft_putendl_fd(str,1);
}

void	rr(t_stack **sa, t_stack **sb, char *str)
{
	str = NULL;
	rx(sa,str);
	rx(sb,str);
	str = "rr";
	ft_putendl_fd(str, 1);
}
