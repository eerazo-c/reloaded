/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:47:00 by elerazo-          #+#    #+#             */
/*   Updated: 2024/09/11 18:48:40 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	int	i;

	c = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &c, 1);
		c++;
		i++;
	}
}

int main ()
{
	ft_print_alphabet();
	return (0);
}
