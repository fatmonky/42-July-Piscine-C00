/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:43:38 by pteh              #+#    #+#             */
/*   Updated: 2023/07/27 17:22:41 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_is_negative(int n)
{
	char	a;

	if (n > 0)
	{
		a = 'P';
		write(1,&a,1);
	} else if (n < 0)
	{
		a = 'N';
		write(1,&a,1);

	}	
}
