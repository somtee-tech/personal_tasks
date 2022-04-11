#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Success when 0
 */

int main(void)
{
	int h, m, s;
	/* we add a delay of 1000 milliseconds and we will use it in the function sleep*/
	int d =1000;
	
	printf("set clock: \n");
	scanf("%d%d%d", &h, &m, &s);

	if (h > 12 || m > 60 || s > 60)
	{
		printf("ERROR! \n");
		return(0);
	}

	/*This is an infinte loop, anything in the loop will repeat itself till infinity*/
	while(1)
	{
		s++;
		if (s > 59)
		{
			m++;
			s = 0;
		}
		if (m > 59)
		{
			h++;
			m = 0;
		}
		if (h >12)
		{
			h = 1;
		}
		printf("\n clock: ");
		/*This writes our clock in the format 00:00:00*/
		printf("\n %2d:%2d:%2d", h, m,s);
		
		/*The function sleep slows down the while loop
		* and make it appear like a real clock sleep(d);
		*this clears the screen)
		*system("cls");
		*/
	}
}
