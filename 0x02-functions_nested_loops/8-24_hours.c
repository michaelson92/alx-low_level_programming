#include "main.h"
/**
  * jack_bauer - prints every minute of the day
  */
void jack_bauer(void)
{
	int hrs, mts;

	for (hrs = 0; mts <= 23; hrs++)
{
	for (mts = 0; mts <= 59; mts++)
	{
		_putchar((hrs / 10) + '0');
		_putchar((hrs % 10) + '0');
		_putchar(':');
		_putchar((mts / 10) + '0');
		_putchar((mts % 10) + '0');
		_putchar('\n');
	}
}
}
