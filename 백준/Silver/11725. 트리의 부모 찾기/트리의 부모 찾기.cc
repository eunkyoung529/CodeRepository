#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v[100001];
int ans[100001];
int visited[100001];

void dfs(int k)
{
	int i;
	visited[k] = 1;
	for (i = 0; i < v[k].size(); i++)
	{
		int next = v[k][i];

		if (visited[next] == 0)
		{
			ans[next] = k;
			dfs(next);
		}
	}
}

int main()
{
	int i, a, b;
	cin >> n;
	for (i = 0; i < n - 1; i++)
	{
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);

	}
	dfs(1);

	for (i = 2; i <= n; i++)
	{
		cout << ans[i] << "\n";
	}

	return 0;
}