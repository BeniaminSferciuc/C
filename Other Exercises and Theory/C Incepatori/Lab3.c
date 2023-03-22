#include <stdio.h>

//Prelucrarea tablourilor unidimensionale

int main()
{	
	int size, i, n = 0, x = 0;
	
	printf("Introdu marimea tabloului: ");
	scanf("%d", &size);

	int number[size];

	for(i = 0; i < size; i++)
	{	
		n++;
		printf("%d) ", n);
		scanf("%d", &number[i]);
		if(number[i] % 2 == 0)
		x = x + number[i];

	}

	printf("Numerele introduse sunt:\n");
	printf("|");

	for(i = 0; i < size; i++)
	{
		printf(" %d |", number[i]);
	}

	printf("\nIar suma numerelor introduse este %d", x);
}


//bloc de hastaguri
/*
int main()
{
	for(int i = 0; i <= 7; i++)
	{
		for(int i = 0; i <= 10; i++)
		{
			printf("#");
		}
		printf("#\n");
	}
	return 0;
}
*/

//tabla inmultirii pe coloane
/*
int main()
{
	int i, n;

	for(i = 1; i <= 10; i++)
	{	
		printf("|");
		for(int n = 1; n <= 10; n++)
		{	
			printf("%3d |", i*n);
		}
		printf("\n---------------------------------------------------");
		printf("\n");

	}

	return 0;
}
*/