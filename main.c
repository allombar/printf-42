/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:55:50 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/21 20:46:44 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	int *i;
	int test = 100;
	unsigned long long longu = 1000000000000000000;
	printf("\nft_printf %i\n", ft_printf("%x %X %p %u %c %s %%", test, test, &test, longu, 'a', "coucou"));
	printf("\nprintf %i\n", printf("%x %X %p %llu %c %s %%", test, test, &test, longu, 'a', "coucou"));
}
