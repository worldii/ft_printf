#include<stdio.h>
#include "ft_printf.h"
int main(void)
{
	int ret = ft_printf("%d", -19);
	ft_printf("%d", ret);
}
