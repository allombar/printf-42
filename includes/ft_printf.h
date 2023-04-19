/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:38:19 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/19 18:39:32 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include "../libft/includes/libft.h"

int	ft_printf(const char *str, ...);
int	ft_parse(const char *str, va_list args);
int	ft_identifier(char c);
int	ft_print_vars(char identifier, va_list args);
int	ft_print_str(char *str);

#endif