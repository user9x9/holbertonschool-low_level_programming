#include "main.h"


int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		sign *= -1;
	}

	else if (s[i] >= '0' && s[i] <= '9')
	{
		started = 1;
		result = result * 10 - (s[i] - '0');
	}

	else if (started)
	{
		break;
		i++;
	}
	if (!started)
	{
		return (0);
	}

	if (sign > 0)
	{
		result = -result;
	}
	return (result);
}
