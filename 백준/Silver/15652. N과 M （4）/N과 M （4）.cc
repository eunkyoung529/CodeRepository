#include <iostream>
using namespace std;
int n, m;
int arr[10];

void dfs(int k, int start)
{
	int i;
	if (k == m)
	{
		for (i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << "\n";
		return;
	}
	for (i = start; i <= n; i++)
	{
		arr[k] = i;
		dfs(k + 1, i);
	}
}

int main()
{
	cin >> n >> m;
	dfs(0, 1);
	return 0;
}