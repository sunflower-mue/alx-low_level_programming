#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid password
 *
 * Return: 0.
 */
int main(void)
{
	int arr[100];
	int i, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		arr[i] = rand() % 78;
		sum += (arr[i] + '0');
		putchar(arr[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
