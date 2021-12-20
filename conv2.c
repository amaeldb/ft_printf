#include "ft_printf.h"

int	conv_u(unsigned int par)
{
	return (to_base(par, "0123456789", 10));
}

int	conv_x(unsigned int par, char *base)
{
	return (to_base(par, base, 16));
}

int	conv_X(unsigned int par, char *base)
{
	return (to_base(par, base, 16));
}
