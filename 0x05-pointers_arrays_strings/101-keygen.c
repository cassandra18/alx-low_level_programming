#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid password
 * for the program 101-crackme
 * Return:0
 */
int main(void)
{
	char pwd[84];
	int in = 0, sum = 0, dh1, dh2;

	srand(time(0));
	while (sum < 2772)
	{
		pwd[in] = 33 + rand() % 94;
		sum += pwd[in++];
	}
	pwd[in] = '\0';
	if (sum != 2772)
	{
		dh1 = (sum - 2772) / 2;
		dh2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			dh1++;
		for (in = 0; pwd[in]; in++)
		{
			if (pwd[in] >= (33 + dh2))
			{
				pwd[in] -= dh2;
				break;
			}
		}
	}
	printf("%s", pwd);
	return (0);
}
