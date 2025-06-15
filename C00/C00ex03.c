#include <unistd.h>

void ft_print_numbers(void)
{
	int number=0;

	while (number <= 9)
	{	
		printf("%d", number);
		number++;
	}
}