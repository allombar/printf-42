/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:38:19 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/21 20:34:17 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <stdio.h>
# include "../libft/includes/libft.h"

int		ft_printf(const char *str, ...);
int		ft_parse(const char *str, va_list args);
int		ft_identifier(char c);
int		ft_print_vars(char identifier, va_list *args);
int		ft_print_str(char *str);
int		ft_putchar_count(int c);
int		ft_putstr_count(char *str);
int		ft_print_int(int nbr);
int		ft_print_hex(unsigned int nbr, int type);
void	ft_puthex(unsigned long long nbr, int *count, int type);
int		ft_print_pointer(unsigned long long nbr, int type);
int		ft_print_ulong(unsigned long long nbr);

#endif