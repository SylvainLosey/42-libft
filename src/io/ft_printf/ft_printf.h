/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:32:47 by sylvain           #+#    #+#             */
/*   Updated: 2022/05/28 14:10:03 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		print_flag(char flag, va_list *ap);
int		print_pointer(va_list *ap, int *counter);
int		print_char(va_list *ap);
int		print_string(va_list *ap);
int		print_hexadecimal(unsigned long n, int *counter, int maj);
int		print_number(int number, int *counter);
int		print_unsigned_number(unsigned int number, int *counter);

#endif