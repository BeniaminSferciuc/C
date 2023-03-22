#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

// Nefacut 4, 8, 15, 16, 17

// Laboratorul 7 (vectori)

// Ex. 1) Diverse afisari a vectorilor
/*
int main(void)
{
	int number;

	printf("Introdu numarul elementelor din vector: ");
	scanf("%d", &number);

	int vector[number];

	printf("Introdu elementele vectorului mai jos: \n");
	for (int i = 0; i < number; ++i)
	{
		printf("vector[%d] = ", i);
		scanf("%d", &vector[i]);
	}

	// A. Afiseaza primul element
	printf("\nPrimul element al vectorului este: %d", vector[0]);

	// B. Afiseaza ultimul element ! cu (number - 1) se afiseaza ultimul element
	printf("\nUltimul element al vectorului este: %d", vector[number - 1]);
	
	// C. Afiseaza elementele de pe pozitii pare
	printf("\nElementele de pe pozitii pare sunt: ");
	for (int i = 0; i < number; ++i)
	{
		if(i % 2 == 0)
			printf("%d ", vector[i]);
	}

	// D. Afiseaza elementele divizibile cu 3
	printf("\nElementele divizibile cu 3 sunt: ");
	for (int i = 0; i < number; ++i)
	{
		if(vector[i] % 3 == 0)
			printf("%d ", vector[i]);
	}

	return 0;
}
*/

// Ex. 2) Suma elementelor vectorului
/*
#define max_vector 10
#define min_vector 1

int main(void)
{
	int number, suma = 0;

	do
	{
		printf("Introduceti numarul de elemente din vector: ");
		scanf("%d", &number);
	} while(number < min_vector || number > max_vector);

	int vector[number];

	for (int i = 0; i < number; ++i)
	{
		printf("vector[%d] = ", i);
		scanf("%d", &vector[i]);
		suma = suma + vector[i];
	}
	printf("\nSuma elementelor vectorului este: %d\n", suma);

	return 0;
}
*/

// Ex. 3) Suma elementelor pare si produsul elementelor impare
/*
int main(void)
{
	int number;
	int sum_par = 0, pro_imp = 1;

	do
	{
		printf("Introduceti numarul de elemente din vector: ");
		scanf("%d", &number);
	} while (number < 1 || number > 10);

	int vector[number];

	for (int i = 0; i < number; i++)
	{
		printf("vector[%d] = ", i);
		scanf("%d", &vector[i]);
		if(vector[i] % 2 == 0)
			sum_par = sum_par + vector[i];
		else
			pro_imp = pro_imp * vector[i];
	}

	printf("\nSuma elementelor pare este: %d", sum_par);
	printf("\nProdusul elementelor impare este: %d\n", pro_imp);

	return 0;
}
*/

// Ex. 4) Numarul de elemente pozitive si negative
/*
int main(void)
{
	int number;
	int nr_pozitive = 0, nr_negative = 0;

	do
	{
		printf("Introduceti numarul de elemente din vector: ");
		scanf("%d", &number);
	} while (number < 1 || number > 10);

	int vector[number];

	for (int i = 0; i < number; i++)
	{
		printf("vector[%d] = ", i);
		scanf("%d", &vector[i]);
		if(vector[i] > 0)
			nr_pozitive++;
	}

	nr_negative = number - nr_pozitive;

	printf("\nNumarul elementelor pozitive este: %d", nr_pozitive);
	printf("\nNumarul elementelor negative este: %d\n", nr_negative);

	return 0;
}
*/

// Ex. 5) Media aritmetica din intervalul [4, 9]
/*
int main(void)
{
	int number_user, sum = 0;
	int j = 0;

	do
	{
		printf("Introdu numarul de elemente din vector: ");
		scanf("%d", &number_user);
	} while (number_user < 1 || number_user > 30);

	int arr[number_user];

	for (int i = 0; i < number_user; ++i)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);

		if(arr[i] >= 4 && arr[i] <= 9)
		{
			sum = sum + arr[i];
			j++;
		}
	}

	printf("\nSuma elementelor din intervalul [4, 9] este: %d\n", sum/j);

	return 0;
}
*/

// Ex. 6) Suma elementelor situare pe pozitii pare si produsul de pe pozitii impare
/*
int main(void)
{
	int number;
	int sum = 0, pro = 1;

	do
	{
		printf("Introduceti numarul de elemente a vectorului: ");
		scanf("%d", &number);
	} while(number < 1 || number > 30);

	int arr[number];

	for (int i = 0; i < number; ++i)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < number; ++j)
	{
		if(j % 2 == 0)
			sum = sum + arr[j];
		else
			pro = pro * arr[j];

	}

	printf("Suma elementelor de pe pozitii pare este: %d\n", sum);
	printf("Produsul elementelor de pe pozitii impare este: %d\n", pro);

	return 0;
}
*/

// Ex. 7) Maximul elementelor unui vector
/*
int main(void)
{
	int number, max = 0;
	int pozition;


	printf("Introdu numarul de elemente din vector: ");
	scanf("%d", &number);

	int arr[number];

	printf("Introdu mai jos elementele vectorului:\n");
	for (int i = 0; i < number; ++i)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	printf("\nVectorul introdus este:\narr[%d] = {", number);
	for (int j = 0; j < number; j++)
	{
		if(j == number - 1)
			printf("%d", arr[j]);
		else
			printf("%d, ", arr[j]);
	}
	printf("}\n");

	for (int z = 0; z < number; z++)
	{
		if(arr[z] > max)
		{
			max = arr[z];
			pozition = z;
		}

	}
	printf("Elementrul maxim din vector este arr[%d] = %d\n", pozition,  max);

	return 0;
}
*/

// Ex. 8) Inmulteste elementele unui vector cu o valoare data
/*
int main(void)
{
	int number, p = 2;

	do
	{
		printf("Introdu numarul elementelor unui vector: ");
		scanf("%d", &number);
	} while(number < 1 || number > 12);

	int arr[number];
	int result[number];

	for (int i = 0; i < number; ++i)
	{
		printf("arr[%d] = ", i);
		scanf("%d",  &arr[i]);
		result[i] = arr[i] * p;
	}

	printf("\nVectorul multiplicat cu %d este: \n", p);

	for (int j = 0; j < number; ++j)
	{
		printf("result[%d] * %d = %d\n", j, p, result[j]);
	}
	
	return 0;
}
*/

// Ex. 9) Cauta o valoare data
/*
int main(void)
{
	int search;
	printf("Introdu valoarea de cautat: ");
	scanf("%d", &search);

	int arr[100];
	for (int i = 0; i < 100; ++i)
	{
		arr[i] = i;
	}

	printf("Valoarea introdusa se afla in pozitia: \n");
	for (int i = 0; i < 100; ++i)
	{
		if (arr[i] == search)
		{
			printf("arr[%d] = %d", i, arr[i]);
		}
	}

	return 0;
}
*/

// Exercitii suplimentare

// Ex. 1) Media aritmetica a numerelor pozitive
/*
#define min 5
#define max 15

int main(void)
{
	int number_user, sum = 0;
	int counter = 0;
	float result;

	do
	{
		printf("Introdu un numarul de elemente din vector: ");
		scanf("%d", &number_user);
	} while(number_user < min || number_user > max);

	int arr[number_user];

	for (int i = 0; i < number_user; ++i)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < number_user; ++j)
	{
		if(arr[j] > 0)
		{
			counter++;
			sum = sum + arr[j];
		}
	}

	result = sum/counter;
	printf("Media aritmetica a numerelor pozitive este: %.1f\n", result);

	return 0;
}
*/

// Ex. 2) Afiseaza maximul elementelor unui vector si pozitia
/*
int main(void)
{
	int number_user;
	int max = 0, p = 0;

	do
	{
		printf("Introdu numarul de elemente din vector: ");
		scanf("%d", &number_user);
	} while(number_user < 1 || number_user > 15);
	
	int arr[number_user];

	for (int i = 0; i < number_user; ++i)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < number_user; ++j)
	{
		if(arr[j] > max)
		{
			max = arr[j];
			p = j;
		}
	}

	printf("Maximul elementelor este \"%d\" si se afla pe pozita arr[%d].\r\n", max, p);


	return 0;
}
*/

// Ex. 3) 
/*
int main(void)
{
	int nr, a = 0;

	printf("Introdu numarul de elemente din vector: ");
	scanf("%d", &nr);

	int v[nr];

	for (int i = 0; i < nr; i++)
	{
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
	}
	printf("\n");

	int arr[nr];

	for (int j = 0; j < nr; j++)
	{
		for (int z = 1; z < 1000; z++)
		{
			if(sqrt(v[j]) == z)
			{
				arr[a++] = v[j];
			}
		}
	}

	for (int i = 0; i < a; ++i)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}
*/

// Ex. 4) Cel mai lung subsir ordonat 


// Ex. 5) Elimina numerele prime din vector 
/*
int main(void)
{
	int number;
		// Citirea nr. de elem. din vector
	do
	{
		printf("Introduceti numarul de elemente a vectorului: ");
		scanf("%d", &number);
	} while(number < 1 || number > 10);

	int arr[number];
		// Citirea elem. vectorului
	printf("Introdu elementele vectorului: \n");
	for (int i = 0; i < number; i++)
	{
		printf("[%d] = ", i);
		scanf("%d", &arr[i]);
	}
		// Algoritmul
	int v[number];
	int h = 0;

	for (int i = 0; i < number; ++i)
	{
		for (int j = 2; j < arr[i]; j++)
		{
			if(arr[i] % j == 0)
			{
				v[h++] = arr[i];
				break;
			}
		}
	}
		// Afisarea rezultatului
	printf("Noul vector cu elementele prime eliminate este: \n");
	for (int i = 0; i < h; ++i)
	{
		printf("v[%d] = %d\n", i, v[i]);
	}
	
	return 0;
}
*/

// Ex. 6) Conversie din baza 10 in baza 2
/*
int main(void)
{
	int zecimal, binar;
	printf("Introdu un numar natural: ");
	scanf("%d", &zecimal);

	int zb[100];
	int i;

	for (i = 0; zecimal > 0; ++i)
	{
		binar = zecimal % 2;
		zb[i] = binar;
		zecimal = zecimal/2;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d ", zb[j]);
	}
	
	return 0;
}
*/

/*
// Ex. 7) Aceleasi cifre

int main()
{
	int a, b; 

	printf("Introdu doua numere de cel putin 3 cifre:\n");
	scanf("%d%d", &a, &b);

	int arr1[a];
	int arr2[b];
	int k = 0, j = 0;

	while(a)
	{
		arr1[k++] = a % 10;
		a = a/10;
	}

	while(b)
	{
		arr2[j++] = b % 10;
		b = b/10;
	}

	int h = 0;

	for (int i = 0; i < k; ++i)
	{
		for (int z = 0; z < j; ++z)
		{
			if(arr1[i] == arr2[z])
			{
				h++;  
				break;
			}
		}
	}

	if(k == h)
		printf("Numerele au aceleasi cifre.\n");
	else
		printf("Numerele NU au aceleasi cifre.\n");	

	return 0;
}
*/

// Ex. 8) 
	

// Ex. 9) afişează cifrele numărului separate prin virgulă
/*
int main(void)
{
	int number;

	printf("Introdu un numar: ");
	scanf("%d", &number);

	int arr[100];
	int i = 0;

	while(number)
	{
		arr[i++] = number % 10;
		number = number/10;
	}

	printf("Cifrele introduse sunt: ");

	for (int j = i - 1; j >= 0; j--)
	{
		if(j != 0)
			printf("%d, ", arr[j]);
		else
			printf("%d.", arr[j]);
	}

	return 0;
}
*/

// Ex. 10) Palindorm cu vectori
/*
int main(void)
{
	int palindrom = 0, n;

	printf("Introdu un numar oarecare si pozitiv: ");
	scanf("%d", &n);

	int arr[10];
	int y = 0;

	for(int i = 0; n > 0; i++)
	{
		arr[i] = n % 10;
		n = n/10;
		y++;
	}

	int arr2[10];
	int j = 0;

	for (int i = y - 1; i >= 0; i--)
	{
		arr2[j++] = arr[i];
	}

	for (int i = 0; i < y; ++i)
	{
		if(arr[i] == arr2[i])
			palindrom = palindrom + 1;
	}

	if(palindrom == y)
		printf("Numarul introdus este un palindorm.\n");
	else
		printf("Numarul introdus NU este un palindorm.\n");

	return 0;
}
*/

// Ex. 11) Nu functioneaza bine
/*
int main(void)
{
	int n;
	
	printf("Introdu numarul de elemente din vector: ");
	scanf("%d", &n);

	int arr[n];
	int cmmdc = arr[0];

	for (int i = 0; i < n; ++i)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i < n; ++i)
	{
		int cpy = arr[i];
		while(cpy != cmmdc)
		{
			if(cpy > cmmdc)
				cpy = cpy - cmmdc;
			else if (cpy < cmmdc)
				cmmdc = cmmdc - cpy;
		}
	}

	printf("Cmmdc este: %d\n", cmmdc);
	
	return 0;
}
*/

// Ex. 12)
/*
	int main(void)
	{
		int n;

		printf("Introdu numarul de elemente a vectorului(> 3): ");
		scanf("%d", &n);

		float arr[n];

		for (int i = 0; i < n; ++i)
		{
			printf("arr[%d] = ", i);
			scanf("%f", &arr[i]);
		}

		float v[n];

		for (int i = 0; i < n; ++i)
		{
			if(i == 0)
			{
				v[i] = (arr[1] + arr[2])/2;
			}
			else if(i > 0 && i < n - 1)
			{
				v[i] = (arr[i - 1] + arr[i + 1])/2;
			}
			else if(i == n - 1)
			{
				v[i] = (arr[n - 2] + arr[n - 3])/2;
			}
		}

		for (int j = 0; j < n; ++j)
		{
			printf("v[%d] = %.1f\n", j, v[j]);
		}
	
		return 0;
	}		
*/

// Ex. 13)
/*
	int main(void)
	{
		int n;

		printf("Introdu numarul de elemente a vectorului(> 3): ");
		scanf("%d", &n);

		float arr[n];

		for (int i = 0; i < n; ++i)
		{
			printf("arr[%d] = ", i);
			scanf("%f", &arr[i]);
		}

		float v[n];

		for (int i = 0; i < n; ++i)
		{
			if(i < n - 1)
				v[i] = (arr[i] + arr[i + 1])/2;
		}	

		for (int i = 0; i < n - 1; ++i)
		{
			printf("%.0f %.1f ", arr[i], v[i]);
		}

		printf("%.0f\n", arr[n - 1]);
	
		return 0;
	}				
*/


// Ex. 14) Media aritmetica a nr. pare de pe pozitii impare
/*
	int main(void)
	{
		int n, inc = 0;

		printf("Introdu numarul de elemente a vectorului(> 3): ");
		scanf("%d", &n);

		int arr[n];

		for (int i = 0; i < n; ++i)
		{
			printf("arr[%d] = ", i);
			scanf("%d", &arr[i]);
		}

		int sum = 0;
		float result;

		for (int i = 0; i < n; ++i)
		{
			if(arr[i] % 2 == 0 && i % 2 != 0)
			{
				sum = sum + arr[i];
				inc++;
			}
		}
		
		result = sum/inc;
		printf("Media aritmetica a nr. pare de pe pozitii impare este: %.1f\n", result);

		return 0;
	}
*/

// Ex. 15) 

// Ex. 16)

// Ex. 17)

// Ex.18) Testeaza daca un sir de numere este ordonat
/*
int main(void)
{
	int number;
		// Citirea numarului de elemente din vector
	do
	{
		printf("Introdu numarul de elemente din vector: ");
		scanf("%d", &number);
	} 
	while(number < 1 || number > 15);

	int v[number];
		// Citirea elementelor din vector
	for (int i = 0; i < number; ++i)
	{
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
	}
		// Afisarea elementelor din vector
	for (int i = 0; i < number; ++i)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
		// Algoritmul
	signed short int ord = 0;
	
	for (int i = 0; i < number; ++i)
	{
		for (int j = i + 1; j < number; ++j)
		{
			if(v[i] > v[j])
			{
				ord = 1;
				break;
			}
		}
	}
		//Afisarea rezultat
	if(ord == 0)
		printf("Sirul introdus este ordonat!\n");
	else if(ord == 1)
		printf("Sirul introdus NU este ordonat!\n");

	return 0;
}
*/

// Ex. 19) Ordoneaza crescator un vector de numere
/*
int main(void)
{
	int number, aux = 0;

	do
	{
		printf("Introdu numarul de elemente din vector: ");
		scanf("%d", &number);
	} 
	while(number < 1 || number > 15);

	int v[number];

	for (int i = 0; i < number; ++i)
	{
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
	}

	for (int i = 0; i < number; ++i)
	{
		for (int j = i + 1; j < number; ++j)
		{
			if(v[i] > v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	printf("Vectorul sortat este: \n");

	for (int i = 0; i < number; ++i)
	{
		printf("v[%d] = %d\n", i, v[i]);
	}

	return 0;
}
*/


		