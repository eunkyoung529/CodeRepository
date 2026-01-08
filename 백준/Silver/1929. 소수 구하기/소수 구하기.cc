#include <iostream>
using namespace std;
int n, m;
int a[1000001];

void input()
{
	cin >> n >> m;
}

void run()
{
	int i, j;

	for (i = 0; i <= m; i++)
	{
		a[i] = 1;
	}
	a[0] = 0;
	a[1] = 0;

	for (i = 2; i * i <= m; i++)
	{
		if (a[i] == 0)
		{
			continue;
		}
		for (j = i * i; j <= m; j += i)
		{
			a[j] = 0;
		}
	}

	for (i = n; i <= m; i++)
	{
		if (a[i] == 1)
		{
			cout << i << "\n";
		}
	}
}

int main()
{
	input();
	run();
	return 0;
}