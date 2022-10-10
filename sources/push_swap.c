/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:26:22 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/11 00:41:06 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* int check_args(int argc, char **argv)
{
	int i;
	int j;
	char	**split;
	
	i = 0;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		printf("s:%s\n", split[i]);
		i++;
	}
	j = 0;
	while (split[j])
	{	
		i = j + 1;
		while (split[i])
		{
			printf("i:%d\nj:%d\n", i, j);
			if (i == j)
				return (1);
			else
				i++;
		}
		j++;
	}
	return 0;
} */

/* int split_string(char *stack, t_data *data)
{
	int i;
	i = 0;
	
} */

int main (int argc, char **argv)
{
	t_data data;
	
	if (argc < 2)
		return (1);
 
	int i = 0;
//	check_args(argc, argv);
	data.split = &argv[1];
	while (data.split[i])
	{
		printf("s:%s\n", data.split[i]);
		i++;
	}
	//split_string(argv[1], &data);
	/* i = 1;
	while (argv[i])
		i++;
	data.a = malloc(sizeof (char *) * (i + 1)); */
	return 0;
}
