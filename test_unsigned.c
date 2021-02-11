#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
/*
	ft_printf("[%4.5i]\n",42);
	ft_printf("[% 4.5i]\n",42);

	printf("[%*.5i]\n",4,42);
	printf("[% *.5i]\n",4,42);
	printf("[%5p]\n", 0);
	ft_printf("[%5p]\n", 0);
*/

	unsigned int num1;
	unsigned int num2;
 unsigned int a = 0;
	unsigned int b = 11;


	num1 = ft_printf("printf1 = [%#x]\n",a);
	num2 = printf("printf2 = [%#x]\n",a);
	printf("printf1_output = [%d]\n",num1-13);
	printf("printf2_output = [%d]\n",num2-13);

	num1 = ft_printf("printf1 = [%x]\n",a);
	num2 = printf("printf2 = [%x]\n",a);
	printf("printf1_output = [%d]\n",num1-13);
	printf("printf2_output = [%d]\n",num2-13);

	num1 = ft_printf("printf1 = [%*.*x]\n",10,5,a);
	num2 = printf("printf2 = [%*.*x]\n",10,5,a);
	printf("printf1_output = [%d]\n",num1-13);
	printf("printf2_output = [%d]\n",num2-13);

num1 = ft_printf("printf1 = [%*.*x]\n",-10,5,a);
num2 = printf("printf2 = [%*.*x]\n",-10,5,a);
printf("printf1_output = [%d]\n",num1-13);
printf("printf2_output = [%d]\n",num2-13);


}
