#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int i;
	int j;

//フィールド幅にintMAXだとエラー
//⇒get field関数の返値とかがintだから？
printf("%*d\n",INT_MAX, 1);

//	ft_printf("%10v\n",10);
//printf("%10v\n",10);

 i = ft_printf("[% *.5iabc% 4.5i]\n",-4, 42,42);
 j = printf("[% *.5iabc% 4.5i]\n",-4, 42,42);

	printf("%d\n",i);
	printf("%d\n",j);

 i = ft_printf("[% 4.5i]\n", 42);
 j = printf("[% 4.5i]\n", 42);

// i = ft_printf("[% *.5h]\n", 4, 42);
// j = printf("[% *.5h]\n", 4, 42);

	printf("%d\n",i);
	printf("%d\n",j);
}
