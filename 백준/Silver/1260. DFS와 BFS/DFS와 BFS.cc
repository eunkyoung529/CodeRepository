#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
int n, m, v;
int arr[1001][1001];
int used[1001];

void dfs(int start)
{
	int i;
	used[start] = 1;
	cout << start << " ";

	for (i = 1; i <= n; i++)
	{
		if (arr[start][i] == 1 && used[i] == 0)
		{
			dfs(i);
		}
	}
}

void bfs(int start)
{
	int i;
	queue<int> q;
	q.push(start);
	used[start] = 1;
	cout << start << " ";

	while (!q.empty())
	{
		int a = q.front();
		q.pop();

		for (i = 1; i <= n; i++)
		{
			if (arr[a][i] == 1 && used[i] == 0)
			{
				q.push(i);
				used[i] = 1;
				cout << i << " ";
			}
		}
	}
}

int main()
{
	int i;
	cin >> n >> m >> v;

	for (i = 1; i <= m; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	dfs(v);
	cout << "\n";
	for (i = 1; i <= n; i++)
	{
		used[i] = 0;
	}
	bfs(v);

	return 0;
}