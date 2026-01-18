#include <iostream>
using namespace std;

int A[1001];
int main()
{
	int n, i, j;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (A[j] > A[j + 1])
			{
				int tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << A[i] << "\n";
	}

	return 0;
}