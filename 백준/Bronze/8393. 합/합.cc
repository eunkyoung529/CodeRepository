#include <iostream>
using namespace std;

int n;

int main()
{
	int i, sum = 0;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout << sum;

	return 0;
}