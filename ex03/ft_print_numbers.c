/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:27:53 by pteh              #+#    #+#             */
/*   Updated: 2023/07/27 16:39:51 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_print_numbers(void)
{
	char	number;
	
	number = 47;
	while (number <= 57)
	{
		number++;
		write(1, &number, 1);
	}
}

int	main(void)
{
	ft_print_numbers();
}
