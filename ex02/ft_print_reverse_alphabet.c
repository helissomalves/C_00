/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrasa-g <hbrasa-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 23:07:03 by hbrasa-g          #+#    #+#             */
/*   Updated: 2020/12/02 23:21:09 by hbrasa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}
