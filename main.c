#include <unistd.h>
#include "ft_printf.h"

int main(void)
{
	char c = 'A';
	ft_printf("(%%c) char c = %c\n", c);
	char * str = "This is string";
	ft_printf("(%%s) char * str = %s\n", str);
	ft_printf("(%%p) char * str = %p\n", str);
	int i = 1234567890;
	ft_printf("(%%d) int i = %d\n", i);
	ft_printf("(%%i) int i = %i\n", i);
	ft_printf("(%%u) int i = %u\n", i);
	ft_printf("(%%x) int i = %x\n", i);
	ft_printf("(%%X) int i = %X\n", i);
	ft_printf("(%%%%) just percent = %%\n");
	return 0;
}