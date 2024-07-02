#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int i;
	int sum = 0;
	int target = 2772;
	int password[100];


	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
		putchar(password[i]);
		if ((target - sum) <= 126)
		{
			i++;
			password[i] = target - sum;
			putchar(password[i]);
			break;
		}
	}
	return (0);
}
