#include <iostream>
using namespace std;

int A[1001];

int main()
{
	int n, i;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			A[1] = 1;
		}
		else if (i == 2)
		{
			A[2] = 3;
		}
		else
		{
			A[i] = (A[i - 1] + 2 * A[i - 2]) % 10007;
		}
	}
	cout << A[n];

	return 0;
}