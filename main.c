/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 09:04:05 by dmeirele          #+#    #+#             */
/*   Updated: 2023/12/29 03:12:47 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_nodes_a(t_stack *sa, t_stack *sb)
{
	current_index(sa);
	current_index(sb);
	set_target_a(sa,sb);
	check_cost_a(sa,sb);
	set_cheapest(sa);
}

void	init_nodes_b(t_stack *sa, t_stack *sb)
{
	current_index(sa);
	current_index(sb);
	set_target_b(sa, sb);
}

void	print_error(void)
{
	ft_putendl_fd("Error",2);
	exit(1);
}

int	main(int argc, char *argv[])
{
	t_stack *sa;
	t_stack *sb;
	int *n_array;
	int size;

	size = 0;
	if (argc > 1) {
		if (!(all_checks_for_input(argv, &size)))
			print_error();
		n_array = ft_calloc(size,sizeof(int));
		if (!n_array)
			return (0);
		n_array = fill_array(argv, n_array);
		if (check_duplicates(n_array, size))
			print_error();
		sa = NULL;
		sb = NULL;
		stack_fill(&sa,n_array,size);
		if (!is_sorted(sa))
		{
			if (stack_len(sa) == 2)
				do_op(&sa,NULL,SA);
			else if (stack_len(sa) == 3)
				sort_three(&sa);
			else
				big_sort(&sa,&sb);
		}
	}
}
