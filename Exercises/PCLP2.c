#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Ex.1)
/*
int main()
{
	int i;
	printf("Introduceti un numar intreg: ");
	scanf("%d", &i);
	i % 2 == 0 ? printf("Numarul este par!") : printf("Numarul este impar!");
	
}
*/

// Ex.2) 
/*
int main()
{
	float nota_examen;
	printf("Introduceti mai jos nota de la examen si veti afla daca ati promovat!\n");
	printf("NOTA EXAMEN: ");
	scanf("%f", &nota_examen);
	if (nota_examen >= 5)
	{
		printf("Ati promovat examenul cu nota %.1f!", nota_examen);
	}
	else
	{
		printf("Ne pare rau, dar nu ati promovat examenul.");
	}
	return 0;
}
*/

//Ex.3)
/*
int main()
{
	int a = 10, b = 15;
	a > b ? printf("%d", a) : printf("%d", b);
	return 0;
}
*/

//Ex.4)
/*
int main()
{
	int numere[] = {678, 423, 789};
	if (numere[0] > numere[1] && numere[0] > numere[2])
	{
		printf("%d", numere[0]);
	}
	else if (numere[1] > numere[0] && numere[1] > numere[2])
	{
		printf("%d", numere[1]);
	}
	else if (numere[2] > numere[1] && numere[2] > numere[0])
	{
		printf("%d", numere[2]);
	}
	return 0;
}
*/

//Ex.5)
/*
int main()
{
	int L, l;
	printf("Introdu doua numere intregi aici: ");
	scanf("%d%d", &L, &l);
	if(L != l && L > 0 && l > 0)
	{
		printf("Perimetrul cu laturile %d si %d este: %d\n", L, l, L + l);
		printf("Aria cu laturile %d si %d este: %d", L, l, L * l);
	}
	else
		printf("Numerele sunt egale sau mai mici si egale cu zero!");
	return 0;
}
*/

//Ex.6) Incomplet
/*
int main()
{
	int c1, c2, ip;
	printf("Introdu un numar intreg pentru variabilele de mai jos.\n");
	printf("a = ");
	scanf("%d", &c1);
	printf("b = ");
	scanf("%d", &c2);
	printf("c = ");
	scanf("%d", &ip);
	if(c1 > 0 && c2 > 0 && ip > 0)
	{
		printf("Perimetrul triunghiului cu laturile introduse este: %d\n", c1 + c2 + ip);	
		printf("Aria nu e disponibila inca!\n");
		printf("Inaltimea nu e disponibila inca!\n");

	}	
	else
		printf("Valorile introduse nu sunt corespunzatoare pentru a calcula perimetrul unui triunghi.");

	return 0;
}
*/

// Ex.7) Incomplet
/*
int main()
{
	int x, y;
	printf("Introduti 2 coordonate si veti afla din ce cadran fac parte.\n");
	printf("x = ");
	scanf("%d", &x);
	printf("y = ");
	scanf("%d", &y);
	if(x == 1 && y == 0)
		printf("Coordonatele se afla in cadranul 1.");
	if(x == 0 && y == -1)
		printf("Coordonatele se afla in cadranul 2.");
	if(x == -1 && y == 0)
		printf("Coordonatele se afla in cadranul 3.");
	if(x == 0 && y == -1)
		printf("Coordonatele se afla in cadranul 4.");
	return 0;
}
*/

// Ex.8)
/*
int main()
{
	float a, b;
	printf("Introduceti valori lui 'a' si 'b'.\n");
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	if(a >= 10)
	{
		printf("E = %.1f", 2*a - 2*b);
	}
	else if(-3 < a && a < 10)
	{
		printf("E = %.1f", a*b);
	}
	else if(a <= -3)
	{
		printf("E = 5");
	}
	return 0;
}
*/

// Ex.9)
// ecuatia de gradul 2: ax^2+bx+c=0
/*
int main()
{
	float a, b, c, delta, x1, x2;
	printf("Introduceti constantele pentru a, b, c.\n");
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	delta = b*b - 4*a*c;
	if(delta > 0 && a > 0)
	{
		x1 = (-b + sqrt(delta))/2*a;
		x2 = (-b - sqrt(delta))/2*a;
		printf("Solutiile ecuatiei %dX^2+%dX+%d sunt:\nx1 = %.1f\nx2 = %.1f", a, b, c, x1, x2);
	}
	else if (delta == 0)
	{
		x1 = x2 = -b/2*a;
		printf("Ecuatia are solutiile X1 = X2 = %.1f", x1);
	}
	else if(a == 0)
	{
		printf("Ecuatia de gradul doi trebuie sa aiba coeficientul a diferit de 0!");
	}
	else
	{
		printf("Ecuatia nu are solutii reale!");
	}
	return 0;
}
*/

// Probleme suplimentare PCLP2
// Ex.1)
/*
int main ()
{
	int numar;
	printf("Introducti un numar aici: ");
	scanf("%d", &numar);
	if(numar < 0)
	{
		printf("Numarul '%d' apartine intervalului de numere negative.", numar);
	}
	else
	{
		printf("Numarul '%d' apartine intervalului de numere pozitive.", numar);	
	}
	return 0;
}
*/

// Ex.2)
/*
int main()
{
	float raza;
	const float pi = 3.14;
	printf("Introduceti aici o valoare a lui r(raza cercului): ");
	scanf("%f", &raza);
	printf("Lungimea (2*pi*raza) cercului de raza '%.1f' este: %.2f\n", raza, 2 * pi * raza);
	printf("Aria (pi*raza*raza) cercului de raza '%.1f' este: %.2f", raza, pi * raza * raza);
	return 0;
}
*/

// Ex.3)
/*
int main()
{
	const float pi = 3.14;
	float r, v, a;
	printf("Introduceti un numar real: ");
	scanf("%f", &r);
	v = (4*pi*r*r*r)/3;
	a = 4*pi*r*r;
	if(r > 0)
	{
		printf("Volumul sferei este: %.2f\nAria sferei este: %.2f", v, a);
	}
	else
	{
		printf("Numarul introdus este un numar negativ.");
	}

	return 0;
}
*/


// Ex.4)
/*
int main()
{
	int x, y;
	printf("Introduceti valorile lui 'x' si 'y' mai jos.\n");
	printf("x = ");
	scanf("%d", &x);
	printf("y = ");
	scanf("%d", &y);
	if(x >= 5 && y > 0)
	{
		printf("E = %d\n", x - 3*y);
	}
	else if(x >= 5 && y < 0)
	{
		printf("E = %d\n", x*x + y*y);	
	}
	else
		printf("E = 50");
	
	return 0;
}
*/


// Ex.5)
/*
int main()
{
	int a[] = {};
	int max = a[2];

	printf("Introduceti valori intregi pentru a, b, c, d mai jos.\n");
	printf("a = ");
	scanf("%d", &a[0]);
	printf("b = ");
	scanf("%d", &a[1]);
	printf("c = ");
	scanf("%d", &a[2]);
	printf("d = ");
	scanf("%d", &a[3]);

	a[4] = labs(a[0]) + labs(a[1]);
	a[2] = a[2] - 2;

	for(int i = 4; i < 5; i++)
	{
		if(max < a[i])
			max = a[i];
	if(a[3] >= 0)
	{
		printf("max(%d)", max);
	}
	else if (a[3] < 0)
	{
		printf("max(%d)", max);
	}
	printf("\nc - 2 = %d", a[2]);
	}

	return 0;
}
*/

// Ex.6)

// Ex.7)
/*
int main()
{	float x;
	float a[] = {};
	printf("Introdu un numar real: ");
	scanf("%f", &x);
	a[0] = (8 * x) - 16;
	a[1] = (x * x) - (2 * x) + 1;
	a[2] = (x * x) - 1;
	a[3] = (x * x) + (5 * x) + 6;
	a[4] = (a[0] / a[1]) * (a[2] / a[3]);
	printf("E = %.1f", a[4]);

	return 0;
}
*/

// Ex.8)
/*
int main()
{
	float a, b, c;

	printf("Introduceti valori reale lui a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);

	if(a == b && b == c && a > 0)
		printf("Valorile introduse %.0f, %.0f, %.0f sunt laturile unui triunghi echilateral.", a, b, c);
	else if(a == b && b != c && a > 0 && c > 0)
		printf("Valorile introduse %.0f, %.0f, %.0f sunt laturile unui triunghi isoscel.", a, b, c);
	else if (a == c && a != b && a > 0 && b > 0)
		printf("Valorile introduse %.0f, %.0f, %.0f sunt laturile unui triunghi isoscel.", a, b, c);
	else if(b == c && a != b && a > 0 && b > 0)
		printf("Valorile introduse %.0f, %.0f, %.0f sunt laturile unui triunghi isoscel.", a, b, c);
	else if (a > 0 && b > 0 && c > 0)
		printf("Valorile introduse %.0f, %.0f, %.0f sunt laturile unui triunghi oarecare.", a, b, c);
	else
		printf("Nu poate fi laturile unui triunghi!");
	
	return 0;
}
*/ 

