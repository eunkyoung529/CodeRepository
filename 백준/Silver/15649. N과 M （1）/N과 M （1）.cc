#include <iostream>
using namespace std;
int n, m;
int arr[10];
int used[10]; 

void dfs(int k)
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
	for (i = 1; i <= n; i++)
	{
		if (used[i] == 0)
		{
			arr[k] = i;
			used[i] = 1;
			dfs(k + 1);
			used[i] = 0;
		}
	}
}

int main()
{
	cin >> n >> m;
	dfs(0);
}