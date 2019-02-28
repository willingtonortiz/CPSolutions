#include <iostream>
using namespace std;

int BT[9][9] = {
	-1, 3, 6, -1, 5, -1, -1, 4, -1,
	9, -1, -1, -1, -1, 4, -1, 5, -1,
	7, -1, -1, -1, 3, -1, -1, -1, 2,
	-1, 5, -1, -1, -1, -1, 7, 2, -1,
	4, -1, -1, -1, 7, 8, -1, -1, 9,
	-1, -1, -1, -1, -1, -1, -1, 3, -1,
	2, 6, 7, -1, 8, 5, 4, -1, -1,
	-1, -1, 8, -1, 4, -1, -1, -1, -1,
	-1, -1, 4, -1, -1, 3, 6, 7, 8};
int found = false;

// Imprime la solución
int printSolution()
{
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			if (BT[i][j] != -1)
				cout << BT[i][j] << " ";
			else
				cout << "_"
					 << " ";
		}
		cout << endl;
	}
	cout << endl;
}

// Valida el valor en la posición
// Fila, Columna, Valor
bool isValid(int i, int j, int k)
{
	// Si ya estaba en la matriz
	if (BT[i][j] != -1)
		return true;

	int si = i / 3, sj = j / 3;

	// Validando bloque
	for (int a = si * 3; a < (si + 1) * 3; ++a)
	{
		for (int b = sj * 3; b < (sj + 1) * 3; ++b)
		{
			if (BT[a][b] == k)
				return false;
		}
	}

	// Checkeo por fila
	for (int a = 0; a < 9; ++a)
		if (BT[i][a] == k)
			return false;

	// Checkeo por columna
	for (int a = 0; a < 9; ++a)
		if (BT[a][j] == k)
			return false;

	// if (i == j)
	// {
	// 	// Checkeo por diagonal
	// 	for (int a = 0; a < 9; ++a)
	// 		if (BT[a][a] == k)
	// 			return false;
	// }

	// if (i + j == 8)
	// {
	// 	// Checkeo por diagonal
	// 	for (int a = 0; a < 9; ++a)
	// 		if (BT[a][8 - a] == k)
	// 			return false;
	// }

	// Solucion posible
	return true;
}

void bt(int i, int j)
{
	if (!found)
	{
		// Si estaba pintado
		if (BT[i][j] != -1)
		{
			if (i + 1 == 9 && j + 1 == 9)
			{
				printSolution();
				found = true;
				return;
			}
			else
			{
				if (j + 1 == 9)
				{
					bt(i + 1, 0);
				}
				else
				{
					bt(i, j + 1);
				}
			}
		}
		else
		{
			for (int k = 1; k <= 9; ++k)
			{
				// Es válido
				if (isValid(i, j, k))
				{
					BT[i][j] = k;

					// Se encontro solucion
					if (i + 1 == 9 && j + 1 == 9)
					{
						found = true;
						printSolution();
						return;
					}
					else
					{
						if (j + 1 == 9)
						{
							bt(i + 1, 0);
						}
						else
						{
							bt(i, j + 1);
						}
					}

					// Dejar vacio
					BT[i][j] = -1;
				}
			}
		}
	}
}

int main()
{
	printSolution();
	bt(0, 0);

	return 0;
}
