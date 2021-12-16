#include "ft_printf.h"

#include <stdio.h>

int main(void)
{
	char *str = "Wazzzaaaaaaaa?!";
	printf("%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%\n%\n", 68, NULL, -1, 6, 9, -1, 42, 42);
}
