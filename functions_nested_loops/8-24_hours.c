#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - main func
 * Return: Always 0 (Success)
 *
 */
void jack_bauer(void)
{
	int hour,minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			putchar(hour / 10 + '0');
			putchar(hour % 10 + '0');
			putchar(':');
			putchar(minute / 10 + '0');
			putchar(minute % 10 + '0');
			putchar('\n');
		}
	}
}
