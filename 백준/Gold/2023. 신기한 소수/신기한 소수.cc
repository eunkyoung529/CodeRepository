#include <iostream>
using namespace std;
int n;

int isPrime(int x)
{
	int i;
	if (x < 2)
	{
		return 0;
	}
	for (i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1; // 소수일때만
}


void dfs(int a, int len)
{
	int i;
	if (len == n)
	{
		cout << a << "\n";
		return;
	}

	int arr[4] = { 1, 3, 7, 9 };

	for (i = 0; i < 4; i++)
	{
		int num = a * 10 + arr[i];
		if (isPrime(num) == 1)
		{
			dfs(num, len + 1);
		}
	}
}

int main()
{
	cin >> n;
	dfs(2, 1);
	dfs(3, 1);
	dfs(5, 1);
	dfs(7, 1);
	return 0;
}