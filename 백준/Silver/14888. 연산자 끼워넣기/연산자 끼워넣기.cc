#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, max_num = -1000000001, min_num = 1000000001;
vector<int> A;
vector<int> op(4);

void dfs(int m, int result)
{
	int i;
	if (m == n)
	{
		if (result > max_num)
		{
			max_num = result;
		}
		if (result < min_num)
		{
			min_num = result;
		}
	}

	for (i = 0; i < 4; i++)
	{
		if (op[i] > 0)
		{
			op[i]--;

			if (i == 0)
			{
				dfs(m + 1, result + A[m]);
			}
			else if (i == 1)
			{
				dfs(m + 1, result - A[m]);
			}
			else if (i == 2)
			{
				dfs(m + 1, result * A[m]);
			}
			else if (i == 3)
			{
				dfs(m + 1, result / A[m]);
			}
			op[i]++;
		}
	}
}

int main()
{
	int i;
	cin >> n;

	A.resize(n);
	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (i = 0; i < 4; i++)
	{
		cin >> op[i];
	}

	dfs(1, A[0]);

	cout << max_num << "\n";
	cout << min_num << "\n";

	return 0;
}