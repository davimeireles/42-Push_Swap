/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:16:32 by dmeirele          #+#    #+#             */
/*   Updated: 2023/12/29 12:50:22 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *str)
{
	int		i;
	int		signal;
	long	result;

	i = 0;
	signal = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * signal);
}

int	check_string(char **input, int *size)
{
	int	i;
	int	j;

	i = 1;
	while (input[i])
	{
		j = 0;
		while (input[i][j])
		{
			while (input[i][j] == ' ' || input[i][j] == '\t')
				j++;
			if (input[i][j])
			{
				if (ft_atoi(&input[i][j]) != ft_atol(&input[i][j]))
					return (0);
				*size += 1;
			}
			while (input[i][j] == '-' || ft_isdigit(input[i][j]))
				j++;
		}
		i++;
	}
	return (1);
}

int	check_input(char **input)
{
	int	i;
	int	j;
	int	flag_number;

	i = 1;
	flag_number = 0;
	while (input[i])
	{
		j = 0;
		while (input[i][j])
		{
			if (input[i][j] == '-' && !(ft_isdigit(input[i][j + 1])))
				return (0);
			if (input[i][j] != ' ' && input[i][j] != '\t' && !(ft_isdigit(input[i][j])) && input[i][j] != '-' )
				return (0);
			if (ft_isdigit(input[i][j]))
				flag_number = 1;
			j++;
		}
		i++;
	}
	if (!flag_number)
		exit(1);
	return (1);
}

void	all_checks_for_input(char **input, int *size)
{
	if (!(check_input(input)))
		print_error();
	if (!(check_string(input, size)))
		print_error();
	return ;
}
