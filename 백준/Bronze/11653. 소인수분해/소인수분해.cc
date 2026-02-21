#include <iostream>
using namespace std;

int n;

int main()
{
	int i;
	cin >> n;

	for (i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			cout << i << "\n";
			n /= i;
		}
	}

	if (n > 1)
	{
		cout << n << "\n";
	}
	return 0;
}