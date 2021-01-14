#include <stdio.h>
#include <string.h>

int ft_strlen(const char *str);

int	main(void)
{
		int i;
		int j;
		char *s;

		s = "hi low\0don't print me lol\0";

	 i = strlen(s);
		j = ft_strlen(s);
	printf("%d\n",i);
		printf("%d\n",j);
}


int	ft_strlen(const char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	 count++;
	return (count);
}
