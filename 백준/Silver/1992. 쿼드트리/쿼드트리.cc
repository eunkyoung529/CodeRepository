#include <iostream>
#include <string>
using namespace std;
int A[65][65];
int n;

void run(int x, int y, int size)
{
	int first = A[x][y];
	int check = 1;
	int i, j;

	for (i = x; i < x + size; i++)
	{
		for (j = y; j < y + size; j++)
		{
			if (A[i][j] != first)
			{
				check = 0;
				break;
			}
		}
		if (check == 0)
		{
			break;
		}
	}

	if (check == 1)
	{
		cout << first;
		return;
	}

	cout << "(";
	int nextSize = size / 2;

	run(x, y, nextSize);
	run(x, y + nextSize, nextSize);
	run(x + nextSize, y, nextSize);
	run(x + nextSize, y + nextSize, nextSize);

	cout << ")";

}


int main()
{
	cin >> n;
	int i, j;
	for (i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		for (j = 0; j < n; j++)
		{
			A[i][j] = str[j] - '0';
		}
	}
	run(0, 0, n);

	return 0;
}