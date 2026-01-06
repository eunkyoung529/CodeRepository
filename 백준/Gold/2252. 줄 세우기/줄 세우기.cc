#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int cnt[32001];
vector<int>A[32001];

void input()
{
	cin >> n >> m;
	int i;
	for (i = 1; i <= m; i++)
	{
		int a, b; //b가 도착
		cin >> a >> b;
		A[a].push_back(b);
		cnt[b] += 1;
	}
}

void run()
{
	int i;
	queue<int>q;
	vector<int>ans;
	for (i = 1; i <= n; i++) {
		if (cnt[i] == 0) q.push(i);
	}

	while (!q.empty()) {
		int t = q.front();
		q.pop();
		ans.push_back(t);
		for (i = 0; i < A[t].size(); i++) {
			cnt[A[t][i]] -= 1;
			if (cnt[A[t][i]] == 0) q.push(A[t][i]);
		}
	}
	for (auto& it : ans) {
		cout << it << ' ';;
	}
}

int main()
{
	input();
	run();
}