#include <stdio.h>
#include <unistd.h>

int		main()
{
	int i = 0;

	while (i <= 10)
	{
		if (i % 2 == 1)
		{
			printf("Salut %d\n", i);
		}
		i++;
	}
}
