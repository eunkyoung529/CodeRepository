#include <iostream>
#include <algorithm>

using namespace std;
int arr[101][101];
int used[101];
int n, m, cnt = 0;

void dfs(int start)
{
	int i;
	used[start] = 1;
	
	for (i = 1; i <= n; i++)
	{
		if (arr[start][i] == 1 && used[i] == 0)
		{
			cnt++;
			dfs(i);
		}
	}
}

int main()
{
	int i;
	cin >> n >> m;

	for (i = 1; i <= m; i++)
	{
		int a, b;
		cin >> a >> b;
		
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	dfs(1);
	cout << cnt;

	return 0;
}