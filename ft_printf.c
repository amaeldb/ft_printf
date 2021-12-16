/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:03:42 by ade-beta          #+#    #+#             */
/*   Updated: 2021/12/16 16:30:55 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conv(const char c, va_list par)
{
	int	count;

	count = 

int	ft_printf(const char *str, ...)
{
	va_list	par;
	int		i;
	int		count;

	i = -1;
	va_start(par, str);
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			if (ft_strchr("cspdiuxX%", str[i + 1]))
				count += conv(str[++i], par);
			else
			{
				write(1, str[i], 1);
				write(1, str[++i], 1);
				count += 2;
			}
			continue ;
		}
		write(1, str[i], 1);
		count++;
	}
	va_end(par);
	return (count);
}
