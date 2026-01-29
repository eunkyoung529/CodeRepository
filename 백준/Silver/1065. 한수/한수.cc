#include <iostream>
using namespace std;

int n;
int cnt = 0;

void check(int a)
{
	if (a < 100)
	{
		cnt++;
	}
	else if (a < 1000)
	{
		int k = a / 100;
		int m = (a / 10) % 10;
		int n = a % 10;

		if((k - m) == (m - n))
		{
			cnt++;
		}
	}
}

int main()
{
	int i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		check(i);
	}

	cout << cnt << "\n";

	return 0;
}