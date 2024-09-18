/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:45:54 by elerazo-          #+#    #+#             */
/*   Updated: 2024/09/18 17:03:01 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*memory;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	memory = malloc(sizeof(char) * (size + 1));
	if (memory == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		memory[i] = src[i];
		i++;
	}
	return (memory);
}
/*
int main ()
{
	char s1[] = "Hola que tal, me lleamo Eli";
	char *result = ft_strdup(s1);

	printf("copia:%s\n", result);
	free (result);
	return (0);
}*/
