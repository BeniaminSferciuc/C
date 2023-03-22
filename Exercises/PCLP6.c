#include <stdio.h>
#include <math.h>

// Laboratorul 8 (Exercitii matrici)
// Ex. 1) 
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

// A.	
	printf("Primul element din matrice este: %d\n", mat[0][0]);
// B. 	
	printf("Primul element din matrice este: %d\n", mat[line - 1][col - 1]);
// C. 
	printf("Prima linie a matricei este: \n");
	for (int z = 0; z < col; ++z)
	{
		printf("%d ", mat[0][z]);	
	}
// D.
	printf("\nUltima linie a matricei este: \n");
	for (int i = 0; i < line; ++i)
	{
		printf("%3d", mat[i][col - 1]);
	}
// E. 
	printf("\nNumerele divizibile cu 7:\n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if(mat[i][j] % 7 == 0)
				printf("%d\n", mat[i][j]);
		}
	}

	return 0;
}
*/

// Ex. 2)
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int sum = 0;

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			sum = sum + mat[i][j];
		}
	}

	printf("Suma elementelor matricei este: %d\n", sum);

	return 0;
}
*/

// Ex. 3)
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int sum = 0, pro = 1;

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if(mat[i][j] % 2 == 0)
				sum = sum + mat[i][j];
			else
				pro = pro * mat[i][j];
		}
	}

	printf("Suma elementelor pare din matrice este: %d\n", sum);
	printf("Produsul elementelor impare din matrice este: %d\n", pro);
}
*/

// Ex. 4)
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int s = 0, p = 0;
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if(mat[i][j] >= 0)
				s++;
			else
				p++;
		}
	}

	printf("Sunt %d numere pozitive in matrice.\n", s);
	printf("Sunt %d numere negative in matrice.\n", p);

	return 0;
}
*/

// Ex. 5) 
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	float mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%f", &mat[i][j]);
		}
	}

	float s = 0, p = 0;

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if(mat[i][j] >= 4 && mat[i][j] <= 9)
			{
				s = s + mat[i][j];
				p++;
			}
		}
	}

	printf("Media aritmetica: %.1f\n", s/p);

	return 0;
}
*/

// Ex. 6)
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int max = 0;

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if(mat[i][j] > 0)
				max = mat[i][j];
		}
	}

	printf("Maximul din matrice este: %d", max);
	
	return 0;
}
*/

// Ex. 7)
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int number;
	printf("Introdu un numar cu care se va inmulti matricea: ");
	scanf("%d", &number);

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			mat[i][j] = mat[i][j] * number;
		}
	}

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
*/

// Ex. 8)
/*
int main(void)
{
	int mat[3][3] =
	{
		{1, 2, 3},
		{3, 9, 6},
		{3, 8, 9}
	};

	int number;
	printf("Introdu o valoare: ");
	scanf("%d", &number);

	int s = 0;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if(mat[i][j] == number)
			{	
				s++;
			}
		}
	}

	if(s == 0)
		printf("Valoarea nu se afla in matrice.\n");
	else
		printf("Valoarea cautata se gaseste de %d ori in matrice.\n", s);
	return 0;
}
*/

// Ex. 9)
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	float mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%f", &mat[i][j]);
		}
	}

	float sum = 0, p = 0;

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if(mat[i][j] >= 0)
			{
				sum = sum + mat[i][j];
				p++;
			}		
		}
	}

	printf("Media arimetica a numerelor pozitive este: %.1f\n", sum/p);

	return 0;
}
*/

// Ex. 10)
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	float mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%f", &mat[i][j]);
		}
	}

	float max = -100000;
	float aux = -100000;

	printf("\n");

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if(mat[i][j] > max)
				max = mat[i][j];
		}
		printf("Maximul din linia %d = %.1f\n", i, max);
		max = aux;
	}

	printf("\n");

	float min = 1000000;
	float aux2 = 1000000;

	for (int i = 0; i < col; ++i)
	{
		for (int j = 0; j < line; ++j)
		{
			if(mat[j][i] < min)
				min = mat[j][i];
		}
		printf("Maximul din coloana %d = %.1f\n", i, min);
		min = aux2;
	}

	return 0;
}
*/

// Ex. 11) 
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int sum;
	int a = 0, b = 0, c = 0, d = 0;

	for (int i = 0; i < col; ++i)
		a = a + mat[0][i];
	
	for (int i = 0; i < col; ++i)
		b = b + mat[line - 1][i];
	
	for (int i = 0; i < line; ++i)
		c = c + mat[i][0];
	
	for (int i = 0; i < line; ++i)
		d = d + mat[i][col - 1];

	int result = 0;

	sum = a + b + c + d;

	result = sum - mat[0][0] - mat[0][col - 1] - mat[line -1][0] - mat[line - 1][col - 1];
	printf("Suma elementelor din conturul matricei este: %d\n", result);

	return 0;
}
*/

// Ex. 12) Adunarea a doua matrici
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int line1, col1;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line1);
	} 
	while (line1 < 1 || line1 > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col1);
	} 
	while (col1 < 1 || col1 > 15);

	int mat1[line1][col1];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line1; ++i)
	{
		for (int j = 0; j < col1; ++j)
		{
			printf("mat1[%d][%d] = ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			mat[i][j] = mat[i][j] + mat1[i][j];
		}
	}

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

// Ex. 13) Inmultirea a doua matrici
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int line1, col1;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line1);
	} 
	while (line1 < 1 || line1 > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col1);
	} 
	while (col1 < 1 || col1 > 15);

	int mat1[line1][col1];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line1; ++i)
	{
		for (int j = 0; j < col1; ++j)
		{
			printf("mat1[%d][%d] = ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}

	int mat3[line][col];

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			mat3[i][j] = mat[i][j] * mat1[i][j];
		}
	}

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", mat3[i][j] - 1);
		}
		printf("\n");
	}

	return 0;
}
*/

// Ex. 14) Suma elem. situate pe diagonala principala
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int sum_d = 0;

	for (int i = 0; i < line; ++i)
	{
		int j = 0;
		j++;
		sum_d = sum_d + mat[i][j];
	}

	printf("Suma elementelor de pe diagonala principala este: %d\n", sum_d);

	return 0;
}	
*/

// Ex. 15) Calculeaza produsul nr. situate deasupra diagonalei principale
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int pro = 1;

	for (int i = 0; i < line - 1; ++i)
	{
		for (int j = i + 1; j < col; ++j)
		{
			pro *= mat[i][j];
		}
	}

	printf("Produsul elementelor situate deasupra diagonalei principale este: %d\n", pro);

	return 0;
}
*/

// Ex. 16) Afiseaza nr. de elem. negative de sub diagonala secundara
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int inc = 0;
	int j;

	for (int i = 1; i < line; ++i)
	{
		for (j = 0; j < i ; ++j)
		{
			if(mat[i][j] < 0)
				inc++;
		}
	}

	printf("Nr. de elem. situate sub diagonalei secundara este: %d\n", inc);

	return 0;
}
*/

// Ex. 17) Suma elementelor pare situate pe diagonala secundara
/*
#define max 30
#define min 2

int main(void)
{
	int line, col;
	int mat[max][max];

	do
	{
		printf("%Introdu numarul de linii: ");
		scanf("%d", &line);
	}
	while(line < min || line > max);

	do
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	}
	while(col < min || col > max);

	
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int sum = 0, j = line - 1;

	for (int i = 0; i < line; i++)
	{
		if(mat[i][j] % 2 == 0)
		{
			sum = sum + mat[i][j];
		}
		j--;
	}

	printf("%d\n", sum);

	return 0;
}
*/

// Ex. 18) Vector ce contine nr. perfecte
/*
int main(void)	
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int arr[100];
	int a = 0;
	

	for (j int i = 0; i < line; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			if(sqrt(mat[i][j]) * sqrt(mat[i][j]) == mat[i][j])
			{
				arr[a++] = mat[i][j];
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

// Ex. 19)
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

		// A.
	int v[100];
	int a = 0;
		
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			v[a++] = mat[i][j];	
		}
	}

	printf("v{");
	for (int i = 0; i < a; ++i)
	{
		printf("%d, ", v[i]);
	}

	printf("\b\b}");
	printf("\n");

		// B.
	int v1[100];
	int m = 0;

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			v1[m++] = mat[j][i];	
		}
	}

	printf("v{");
	for (int i = 0; i < m; ++i)
	{
		printf("%d, ", v1[i]);
	}

	printf("\b\b}");

		// C.

	return 0;
}
*/

// Ex. 20)
/*
int main(void)
{
	int n;
	int mat[100][100];
	
	do
	{
		printf("Introdu un numar: ");
		scanf("%d", &n);
	}
	while(n < 1 || n > 30);

	int p = 1, m = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			mat[i][j] = 3 * p + m * 3;
			p++;
			m++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

// Ex. 21)
/*
int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int v[col], s = 0;

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			s = s + mat[i][j];
		}
		v[i] = s;
		s = 0;
	}

	int max = 0, i;
	int g = -1;

	for (i = 0; i < line; ++i)
	{
		if(v[i] > max)
		{
			max = v[i];	
			g++;
		}
	}

	printf("Linia pe care suma elementele este maxima este: %d\nIar valoarea este: %d\n", g, max);

	return 0;
}
*/

// Ex. 22)

int main(void)
{
	int line, col;

	do 
	{
		printf("Introdu numarul de linii: ");
		scanf("%d", &line);
	} 
	while (line < 1 || line > 15);

	do 
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > 15);

	int mat[line][col];
	printf("Introdu numarul de elemente: \n");
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	int aux = 0;
	int v[line];

	return 0;
}