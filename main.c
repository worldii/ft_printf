#include <stdio.h>
#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
int main(void)
{

	int ret = printf(" %p %p \n", LONG_MIN, LONG_MAX);
	printf("%d\n", ret);

	ret = ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
	printf("%d\n", ret);
	ret = printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	printf("%d\n", ret);

	ret = ft_printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	printf("%d\n", ret);
}
