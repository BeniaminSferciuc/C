#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Exercitii din laboratorul 4 

// Ex.1) Suma primelor n nr. naturale
/*
int main()
{	
	int user_number, i = 0;
	while(user_number <= 10)
	{	
		printf("Introdu un numar natural: ");
		scanf("%d", &user_number);
		i = i + user_number;
	}
	printf("Rezultatul sumei numerelor este: %d", i);
	
	return 0;
}
*/

// Ex.2) Suma nr. citite
/*
int main()
{
	int user, i = 0, suma = 0;
	while(user != 0)
	{
		printf("Introduceti mai multe numere naturale: ");
		scanf("%d", &user);
		i++;
		suma = suma + user;
	}
	printf("Suma numerelor introduse este %d", suma);
	return 0;
}
*/

// Ex.3) Suma nr. pare si produsul nr. impare
/*
int main()
{
	int user, pare = 0, impare = 0;

	while(user != 0)
	{
		printf("Introduceti mai multe numere intregi: ");
		scanf("%d", &user);
		if(user % 2 == 0)
			pare = pare + user;
		else if 
			impare = impare * user;
	}
	
	printf("Suma numerelor pare este = %d\n", pare);
	printf("Suma numerelor impare este = %d\n", impare);
	
	return 0;
}
*/

// Ex.4) Nr. pare folosind instructiunea continue
/*
int main()
{
	int user;

	while(user != 0)
	{
		printf("Introduceti un numar: ");
		scanf("%d", &user);
		if(user % 2 != 0)
			continue;
		printf("Numar par: %d\n", user);	
	}

	return 0;
}
*/

// Ex.5) Nr. elementelor negative si pozitive
/*
int main()
{
	int user, i = 0, number = 1;
	int pare = 0, impare = 0;
	int c = 34;

	printf("Introduceti mai multe numere:\n");

	while(user != 0)
	{
		printf("%d) ", number);
		scanf("%d", &user);
		i++;
		number++;
		if(user % 2 == 0 && user != 0)
		{
			pare = pare + 1;
		}
		else if(user % 2 != 0 && user != 0)
		{
			impare = impare + 1;	
		}
	}

	printf("Ati introdus %c%d%c numere pare!\n", c, pare, c);
	printf("Ati introdus %c%d%c numere impare!\n", c, impare, c);
	
	
	return 0;
}
*/

// Ex.6) Suma primelor n nr. naturale
/*
int main ()
{
	int n, result = 0;
	do 
	{
		printf("Introdu: ");
		scanf("%d", &n);
		result = result + n;
	}
	while(n < 10);
	printf("Suma numerelor introduse este = %d", result);
	return 0;
}
*/

// Ex.7) Perimetrul si aria unui patrat
/*
int main ()
{
	int latura, c = 34;
	do
	{
		printf("Introdu lungimea laturii: ");
		scanf("%d", &latura);
	}
	while(latura <= 1);

	printf("\n");
	printf("Perimetrul patratului cu latura %c%d%c este %c%d%c\n", c, latura, c, c, 4*latura, c);	
	printf("Aria patratului cu latura %c%d%c este %c%d%c\n", c, latura, c, c, latura*latura, c);

	return 0;
}
*/

// Ex.8) Media aritmetica din [3, 10]
/*
int main ()
{
	float user, i = 0, n = 0;
	do
	{
		printf("Introdu: ");
		scanf("%f", &user);
		if(user >= 3 && user <= 10)
		{

			i = i + user;
			n++;
		}
	}
	while(user != 0);
	printf("Media aritmetica a numerelor din intervalul [3, 10] este = %.2f", i/n);
	return 0;
}
*/

// Ex.9) Suma primilor n nr. naturale
/*
int main()
{
	int i, n = 0;
	for(i = 0; i < 10; i++)
	{
		n = n + i;
	}
	printf("Suma primilor 9 numere narurale este: %d", n);
	return 0;
}
*/

// Ex.10) suma > 100 programul va fi oprit
/*
int main()
{
	int i, n = 0;
	for(n = 0; n <= 100;)
	{
		printf("Introdu: ");
		scanf("%d", &i);
		n = n + i;
	}
	printf("Suma numerelor introduse este: %d", n);
	return 0;
}
*/

// Ex.11) Factorialul
/*
int main()
{
	unsigned long long factorial, result = 1;
	int user;
	printf("Introduceti numarul pentru calculul factorial: ");
	scanf("%d", &user);
	for(factorial = 1; factorial <= user; factorial++)
	{
		result = result * factorial;
	}
	printf("%d! = %llu\n", user, result);
	return 0;
}
*/

// Ex.12) Puteri
/*
int main()
{
	int b, e;
	
	printf("Calcul cu puteri de forma a^b = c\na = ");
	scanf("%d", &b);
	int result = b;
	printf("b = ");
	scanf("%d", &e);

	for(int i = 1; i < e; i++)
	{
		result = result * b;
	}
	printf("%d\n", result);
	return 0;
}
*/

// Ex.13) A. Sume
/*
int main()
{
	int n, i; 
	int impar = 0, par = 0, salt = 0, produs = 1;

	printf("Introdu o valoare lui n = ");
	scanf("%d", &n);
	
	// A.
	for(i = 1; i <= n; i += 2)
	{
		impar = impar + i;
	}
	printf("\nS = 1 + 3 + 5 + ... + n = %d\n", impar);
	
	// B.
	for(i = 0; i <= n; i += 2)
	{
		par = par + i;
	}
	printf("S = 2 + 4 + 6 + ... + n = %d\n", par);

	// C.
	for(i = 1; i <= n; i += 3)
	{
		salt += i;
	}
	printf("S = 1 + 4 + 7 + ... + n = %d\n", salt);
	
	// D. 
	int s=0;
	int p=1; 
	for(int i = 1; i <= n; i++)
	{
		p=p*i;
		s=s+p;
	}
	printf("S = 1 + 1*2 + 1*2*3 + ... + n = %d", s);

	return 0;
}
*/

// Ex.14) 
/*
int main()
{
	int user, suma = 0, stocare;
	printf("Opreste calculul introducand 0;\n");
	while(user!= 0)
	{	
		printf("Introdu: ");
		scanf("%d", &user);
		suma = suma + user;	
	}
	printf("Suma numerelor introduse este egala cu %d\n", suma);
	return 0;
}
*/

// Ex. 15) Suma nr. pare
/*
int main ()
{
	int user, par = 0;
	for(user = 1; user != 0;)
	{
		printf("Introdu: ");
		scanf("%d", &user);
		if(user % 2 == 0)
			par += user;
	}
	printf("Suma numerelor pare este = %d", par);
	return 0;
}
*/

// Ex. 16) Produsul nr. pozitive si suma nr. negative
/*
int main()
{
	int user;
	int n = 0, p = 1;
	for(user = 1; user != 0;)
	{
		printf("Introdu: ");
		scanf("%d", &user);
		if(user > 0)
			p = p * user;
		else if(user < 0)
			n = n + user;
	}
	printf("Produsul numerelor pozitive este: %d\nSuma numerelor negative este: %d", p, n);
	return 0;
}
*/

// Ex. 17) Nr. de valori pozitive citite
/*
int main ()
{
	int user, pozitive = 0;
	for(user = 1; user != 0;)
	{
		printf("Introdu: ");
		scanf("%d", &user);
		if(user > 0)
			pozitive = pozitive + 1;
	}
	printf("Numarul de numere pozitive introduse este: %d", pozitive);
	return 0;
}
*/

// Ex.18) Media aritmetica a nr. pare
/*
int main()
{
	int user, par = 0, n = 0;
	for(user = 1; user != 0;)
	{
		printf("Introdu: ");
		scanf("%d", &user);
		if(user > 0)
		{
			par = par + user;
			n = n + 1;
		}
	}
	printf("Media aritmetica a numerelor introduse este: %d", par/n);

	return 0;
}
*/

// Ex.19) Maximul elementelor citite
/*
int main()
{
	int user[] = {1, 7, 55, 2, -10, 34};
	int max = user[0];
	for(int i = 0; i < 6; i++)
	{
		if(max < user[i])
		max = user[i];
	}
	printf("Numarul maxim din interval este: %d", max);
}
*/

// Probleme suplimentare

// Ex. 1) Restul 3 la impartirea cu 5
/*
int main()
{	
	int number, i, n = 0;
	for(i = 1; number % 5 == 3; i++)
	{
		printf("Introdu aici: ");
		scanf("%d", &number);
		if(number % 5 == 3)
			n = n + 1;
	}
	printf("%d", n);
	return 0;
}
*/

// Ex. 2) Sa se afiseze nr. de elemente din [a, b]
/*
int main()
{
	int a, b, n = 0;
	int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	for(int i = 0; i < 15; i++)
	{
		if(c[i] >= a && c[i] <= b)
		{
			n++;
			c[i];
			printf("%d | ", c[i]);
		}
	}
	printf("\nSunt %d numere cuprinse in intervalul [%d, %d]\n", n, a, b);

	return 0;
}
*/

// Ex. 3) Sirul lui Fibonacci 
/*
int main(void)
{
	int n;
	scanf("%d", &n);
	if(n == 1)
	{
		printf("1");
	}
	else
	{
		printf("1 1 ");
		n-=2; // n = n - 2; 
	}


	int a, b, c;
	a = 1;
	b = 1;
	while(n > 0)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);
		n--;
	}
	return 0;
}
*/

// Ex. 4) Media aritmetica pentru primul cu al doilea, al doilea cu al treilea ...
/*	
int main(void)
{	
	float n, m;

	printf("Introdu numerele si eu iti afisez m.a. a doua numere!\n");
	printf("Tasteaza 0 pentru exit.\nIntrodu numerele mai jos: \n");
	while(n != 0)
	{
		scanf("%f", &n);
		if(n == 0)
		{
			printf("Introdu inca un \"0\" si programul se va inchide.\n");
		}
		scanf("%f", &m);
		if(n == 0 && m == 0)
		{
			break;
		}
			printf("Media aritmetica a celor 2 numere este: %.1f\n", (n + m)/2);
		
	}	
	return 0;
}
*/

// Ex. 5) Suma nr. impare si produsul nr. pare
/*
int main()
{
	int user;
	int impar = 0, par = 1;

	for(user = 1; user != 0;)
	{
		printf("Introdu:\n");
		scanf("%d", &user);

		if(user % 2 != 0)
		{
			impar = impar + user;
		}
		if (user % 2 == 0 && user != 0)
		{
			par = par * user;
		}
	}
	printf("Suma numerelor impare este: %d\n", impar);
	printf("Produsul numerelor pare este: %d\n", par);

	return 0;
}
*/

// Ex. 6) Sir 1 -1 1 1 -1 1 1 1 ...  Nu-i complet
/*
int main(void)
{
//	Cum afisez dinamic 1 -1 1 1 -1 1 1 1 -1 ...
	int n;
	int a = 1; int b = -1;
	printf("Introdu o valoare pentru n: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		// a b a a b a a a b ...
		for(int i = 1; i <= n - i ; i++)
		{
			printf("%d ", a);
		}
		printf("%d ", b);

	}
	return 0;
}
*/

// Ex. 7) Sir 1 3 2 4 3 5 4 ...
/*
int main(void)
{
	int nr, a = 1;
	int c;
	printf("Introdu o valoare pentru a: ");
	scanf("%d", &nr);

	for(int i = 0; i < nr; i++)
	{
		if(i == 0)
		{
			printf("1 ");
		}
		printf("%d ", c = a + 2);
		printf("%d ", a = c - 1);
	}
	return 0;
}
*/

// Ex. 8) Afisarea cifrelor numarului
/*
int main(void)
{
	int number, result;

	printf("Introduceti un numar si voi afisa cifrele numarului: ");
	scanf("%d", &number);

	while(number != 0)
	{
		result = number % 10;
		printf("%d\n", result);
		number = number / 10;
	}

	return 0;
}
*/

// Ex. 9) Numar prim
/*
int main(void)
{
    int nr;
    int prim = 1;
 	
 	printf("Introdu un numar: ");
    scanf("%d", &nr);
 
    for (int i = 2; i <= nr/2; i++) 
    {
        if (nr % i == 0) 
        {	
	    	prim = 0;
		}
    }
 
    if (nr > 1 && prim == 1) 
    {
        printf("Numarul %d este numar prim.\n", nr);
    }
    else if (nr < 0)
    {
    	printf("Numarul introdus este un numar negativ.\n");
    }
    else
    {
    	printf("Numarul %d nu este numar prim.\n", nr);
    }
 
    return 0;
}
*/

// Ex. 10) Cel mai mare divizor comun 
// Metoda 1
/*
int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	while(a != b)
	{
		if(a > b)			
			a = a - b;
		else
			b = b - a;
	}
	printf("cmmdc este: %d", a);
	printf("\n\n\n");
	printf("%d", cmmdc(a, b));
	return 0;
}
*/

// Metoda 2
/* 
int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);

	while(b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	printf("%d", a);
}
*/

// Ex. 11) Perimetrul si aria unui dreptunghi
/*
int main(void)
{
	int latime, lungime;

	do
	{	
		printf("Introdu latime dreptunghiului: ");
		scanf("%d", &latime);
	}
	while(latime == 0);

	do
	{	
		printf("Introdu lungimea dreptunghiului: ");
		scanf("%d", &lungime);
	}
	while(lungime == 0);

	printf("\nPerimetrul dreptunghiului este: %d\nAria dreptunghiului este: %d", 2*latime + 2*lungime, latime*lungime);

	return 0;
}
*/

// Ex. 12) Numar perfect
/*
int main(void)
{
	int nr, result = 0, a = 0;
	printf("Introdu un numar natural: ");
	scanf("%d", &nr);
	int b = nr;

	for(int i = nr; i > 1; i--)
	{
		if(nr % i == 0)
		{
			result = nr/i;
			a = a + result;

			printf("%d ", result);
			if(i > 2)
				printf("+ ");
			else if (i == 2)
				printf("= %d", a);

		}
	}

	if(b == a)
	{
		printf("\nNumarul %d este numar perfect", nr);
	}
	else if(nr < 0)
	{
		printf("\nNu este acceptat\n");
	}
	else
	{
		printf("\nNumarul %d nu este numar perfect", nr);
	}

	return 0;
}
*/

// FINISH