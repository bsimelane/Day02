/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsimelan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:37:10 by bsimelan          #+#    #+#             */
/*   Updated: 2020/06/23 08:38:04 by bsimelan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_print_reverse_alphabet(void)
{
	char letter = 'z';
	while (letter >= 'a') 
	{
	ft_putchar(letter);
	letter = letter-1;
	}
}
