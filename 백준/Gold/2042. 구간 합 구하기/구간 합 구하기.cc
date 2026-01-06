#include <iostream>
long long tree[4000001];
int check[4000001];
using namespace std;

int main()
{
	long long n, m, k;
	cin >> n >> m >> k;
	int i, j;
	int start = 1;
	check[0] = 1;
	while (start < n)
	{
		check[start] = 1;
		start *= 2;
	}
	check[start] = 1;
	for (i = start; i < start+n; i++)
	{
		cin >> tree[i];
	}
	for (i = start - 1; i >=1; i--)
	{
		tree[i] = tree[i * 2] + tree[i * 2 + 1];
	}
	

	for (i = 0; i < m + k; i++)
	{
		long long a, b, c;
		cin >> a >> b >> c;
		if (a == 1)
		{
			b--;
			int idx = start + b;
			long long diff = c - tree[idx];
			while (idx != 0)
			{
				tree[idx] += diff;
				idx /= 2;
			}
		}
		else
		{
			b--;
			c--;
			long long s1 = 0, s2 = 0;
			int idx = start + c;
			while (1)
			{
				if (idx % 2 == 0 || idx == 1)
				{
					s1 += tree[idx];
					if (check[idx]) break;
					idx = (idx - 1) / 2;
				}
				else
				{
					idx /= 2;
				}
			}

			idx = start + b - 1;
			if (idx >= start)
			{
				while (1)
				{
					if (idx % 2 == 0 || idx == 1)
					{
						s2 += tree[idx];
						if (check[idx]) break;
						idx = (idx - 1) / 2;
					}
					else
					{
						idx /= 2;
					}
				}
			}
			cout << s1 - s2 << endl;
		}

	}
	return 0;
}