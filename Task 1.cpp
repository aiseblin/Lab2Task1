#include <iostream>
using namespace std;

const int MAX_ROWS = 3;
const int MAX_COLUMNS = 2;

int Even(int A[MAX_ROWS][MAX_COLUMNS], int Length, int Width);

int main()
{
	int A[MAX_ROWS][MAX_COLUMNS]= {{ 3 , 2 },{ 4, 5 },{ 2, 2 } };
	cout << Even(A, MAX_ROWS, MAX_COLUMNS);
	char pause;
	cin >> pause;
	return 0;
}

int Even(int A[MAX_ROWS][MAX_COLUMNS], int Length, int Width)
{
	int numEven = 0;
	for (int row = 0; row < Length; row++)
	{
		for (int col = 0; col < Width; col++)
		{
			if (A[row][col] % 2 == 0)
			{
				numEven++;
			}
			
		}
	}
	return numEven;
	
}
