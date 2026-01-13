#include <iostream>
#include <vector>

using namespace std;
//vector<long long>A; // 기존 배열 저장
vector<long long>tree; // 세그먼트 트리 노드 값 저장 배열
vector<int> check;

long long part_sum(int idx) // 구간 합
{
	long long sum = 0;
	if (idx % 2 == 0 || idx == 1)
	{
		sum += tree[idx];
		if (check[idx])
		{
			return sum;
		}
		sum += part_sum((idx - 1) / 2);
	}
	else
	{
		sum += part_sum(idx / 2);
	}
	return sum;
}

void update(int idx, long long diff)
{
	tree[idx] += diff;
	if (idx == 1)
	{
		return;
	}
	update(idx / 2, diff);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, q;
	cin >> n >> q;
	//A.resize(n + 1);
	tree.resize(4 * n);
	check.resize(4 * n);

	int start = 1;
	while (start < n)
	{
		check[start] = 1;
		start *= 2;
	}
	check[start] = 1;
	int i;
	for (i = start; i < start + n; i++)
	{
		cin >> tree[i];
	}
	for (i = start - 1; i >= 1; i--)
	{
		tree[i] = tree[2 * i] + tree[2 * i + 1];
	}
	for (i = 0; i < q; i++)
	{
		int x, y, a, b;
		cin >> x >> y >> a >> b;
		x--, y--;
		if (x > y)
		{
			int tmp = x;
			x = y;
			y = tmp;
		}
		long long result = part_sum(start + y);
		if (x > 0)
		{
			result -= part_sum(start + x - 1);
		}
		cout << result << '\n';
		a--;
		update(start + a, b - tree[start + a]);
	}
}