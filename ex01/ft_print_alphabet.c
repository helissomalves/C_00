/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrasa-g <hbrasa-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:37:00 by hbrasa-g          #+#    #+#             */
/*   Updated: 2020/12/02 19:47:45 by hbrasa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int j;

	j = 97;
	while (j <= 122)
	{
		write(1, &j, 1);
		j++;
	}
}
