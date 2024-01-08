/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:15:02 by dmeirele          #+#    #+#             */
/*   Updated: 2024/01/03 16:15:02 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack **sa, t_stack **sb, char *str)
{
	str = NULL;
	rrx(sa, str);
	rrx(sb, str);
	str = "rrr";
	ft_putendl_fd(str, 1);
}

void	rr(t_stack **sa, t_stack **sb, char *str)
{
	str = NULL;
	rx(sa, str);
	rx(sb, str);
	str = "rr";
	ft_putendl_fd(str, 1);
}
