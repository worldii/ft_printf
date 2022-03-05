#include<stdio.h>
#include "ft_printf.h"
int main(void)
{
	int ret = ft_printf("%s %x", "sdasds", 10);
	ft_printf("%d", ret);
}
