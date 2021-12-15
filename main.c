#include "ft_printf.h"

#include <stdio.h>

int main(void)
{
	char *str = "Wazzzaaaaaaaa?!";
	printf("%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%\n", 69, NULL, -1, 69, 69, 69, 42, 42);
}
