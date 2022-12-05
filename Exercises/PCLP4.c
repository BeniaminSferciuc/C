#include <stdio.h>

// Laboratorul 5

// Ex. 1) Tabla inmultirii
/*
int main(void)
{
	int i, j;

	for(i = 1; i <= 10; i++)
	{
		printf("%d ", i);
		for(j = 2; j <= 10; j++)
		{
			printf("%5d", i*j);
		}
		printf("\n");
	}
	
	return 0;
}
*/

// Ex. 2) Palindrom
/*
int main(void)
{
	int number, palindrom = 0;
	int store_number;

	printf("Introduceti un numar natural oarecare: ");
	scanf("%d", &number);
	store_number = number;

	while(number != 0)
	{
		palindrom = (palindrom * 10) + number % 10;
		number = number / 10;
	}

	if(store_number == palindrom)
		printf("Numarul %d este un palindrom!", store_number);
	else
		printf("Numarul %d NU este un palindrom!", store_number);

	return 0;

}
*/

// Ex. 3) Afisarea unui nr. fara cifrele pare
/*
int main(void)
{
	int n, nr_result, nr_storage = 0;
	int invers_number = 0;

	printf("Introdu un numar natural: ");
	scanf("%d", &n);

	while(n != 0)
	{
		nr_result = n % 10;
		if(nr_result % 2 != 0)
		{
			nr_storage = (nr_storage * 10) + nr_result;
		}
		n = n / 10;
	}

	while(nr_storage!= 0)
	{
		invers_number = (invers_number * 10) + nr_storage % 10;
		nr_storage /= 10;
	}

	printf("Numarul introdus fara cifrele pare este: %d\n", invers_number);

	return 0;
}
*/

// Ex. 4) Afisarea nr. cifrelor de 1 din baza doi
/*
int main(void)
{
	int n, result, copy_number;
	int i = 0;

	printf("Introdu nu numar natural oarecare: ");
	scanf("%d", &n);

	copy_number = n;

	while(n != 0)
	{
		result = n % 2;
		if(result % 2 == 1)
			i++;
		n = n / 2;
	}

	printf("Numarul de cifre de 1 in baza 2 a numarului \"%d\" este: %d\n", copy_number, i);

	return 0;
}
*/

// Ex. 5) Media aritmetica a numerelor cu ultima cifra 7
/*
int main(void)
{	
	int number, seven;
	int i = 0, result = 0;

	printf("Introdu mai jos multe numere intregi.\nIntrodu \"0\" si vei vedea rezultatul.\n");
	printf("Introdu numerele: \n");

	while(number != 0)
	{
		scanf("%d", &number);
		seven = number % 10;
		if(seven == 7)
		{
			result = result + number;
			i++;
		}
	}
	printf("Media aritmetica a numerelor cu ultima cifra 7 este: %d", result/i);

	return 0;
}
*/

// Ex. 6) Numere prime
/*
int main(void)
{
	int number, i;
	int score = 0;
	int nr_prim = 1;

	printf("Introdu mai jos multe numere intregi (Opreste ciclul cu cifra 0):\n");


	while(number != 0)
	{
		scanf("%d", &number);

		for (int j = 2; j < number; j++)
		{
			if(number % j == 0)
				nr_prim = 0;
		}

		if(nr_prim == 1 && number > 0)
		{
			score++;
		}
	}

	printf("\n%d dintre numerele introduse sunt numere prime.\n", score);

	return 0;
}
*/

// Ex. 7)
/*
int main(void)
{
	int a, b;
	int suma_a = 0;
	int suma_b = 0;

	printf("Introduceti doua numere: \n");
	printf("1) ");
	scanf("%d", &a);
	printf("2) ");
	scanf("%d", &b);

	for (int i = 1; i < a; i++)
	{
		if(a % i == 0)
		{
			suma_a = suma_a + i;
		}
	}

	for (int j = 1; j < b; j++)
	{
		if(b % j == 0)
		{
			suma_b = suma_b + j;
		}
	}

	if(a == suma_b && b == suma_a)
	{
		printf("Numerele introduse sunt prietene!\n");
	}
	else
		printf("Numerele introduse NU sunt prietene.");


	return 0;
}
*/