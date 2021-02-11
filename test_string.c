#include "ft_printf.h"

int main(void)
{

static char *s_hidden = "hi low\0don't print me lol\0";

ft_printf("%20.6s\n",s_hidden);
printf("%20.6s\n",s_hidden);


int i,j;
char *s;

s = "NULL";
i =	ft_printf("[%.]\n",s);
j = printf("[%.]\n",s);
printf("%d\n",i-3);
printf("%d\n",j-3);



s = "NULL";
i =	ft_printf("[%s]\n",s);
j = printf("[%s]\n",s);
printf("%d\n",i-3);
printf("%d\n",j-3);

s = "abcde";
i =	ft_printf("[%-10s]\n",s);
j = printf("[%-10s]\n",s);
printf("%d\n",i-3);
printf("%d\n",j-3);

s = "abcde";
i =	ft_printf("[%10.3s]\n",s);
j = printf("[%10.3s]\n",s);
printf("%d\n",i-3);
printf("%d\n",j-3);

s = "abcde";
i =	ft_printf("[%010s]\n",s);
j = printf("[%010s]\n",s);
printf("%d\n",i-3);
printf("%d\n",j-3);

s = "ab";
i =	ft_printf("[%3.6s]\n",s);
j = printf("[%3.6s]\n",s);
printf("%d\n",i-3);
printf("%d\n",j-3);

i =	ft_printf("[ab%s%d]\n","cd",12);
j = printf("[ab%s%d]\n","cd",12);
printf("%d\n",i-3);
printf("%d\n",j-3);

i =	ft_printf("[  %-10.5s%-10.5d%%%p]\n","cd",12, &i);
j = printf("[  %-10.5s%-10.5d%%%p]\n","cd",12, &i);
printf("%d\n",i-3);
printf("%d\n",j-3);

}
