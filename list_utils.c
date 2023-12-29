/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:02:01 by dmeirele          #+#    #+#             */
/*   Updated: 2023/12/29 01:01:34 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_stack(t_stack *popped)
{
	while (popped)
		popped = popped->next;
}

bool	is_sorted(t_stack *stack)
{
	if (!stack)
		return (true);
	while (stack->next)
	{
		if (stack->number > stack->next->number)
			return (false);
		stack = stack->next;
	}
	return (true);
}

int	stack_len(t_stack *stack)
{
	int len;

	len = 0;
	while (stack)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}

t_stack		*find_biggest_node(t_stack *stack)
{
	int		big_number;
	t_stack	*big_node;

	big_number = 0;
	while (stack)
	{
		if (stack->number > big_number)
		{
			big_node = stack;
			big_number = stack->number;
		}
		stack = stack->next;
	}
	return (big_node);
}

void		sort_three(t_stack **stack)
{
	t_stack *big_node;

	big_node = find_biggest_node(*stack);
	if (big_node == *stack)
		do_op(stack,NULL, RA);
	else if ((*stack)->next == big_node)
		do_op(stack,NULL, RRA);
	if ((*stack)->number > (*stack)->next->number)
		do_op(stack, NULL,SA);
}

