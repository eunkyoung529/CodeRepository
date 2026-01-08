#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A, B;
int n, m;

void input()
{
	int i;
	cin >> n;
	A.resize(n);
	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	cin >> m;
	B.resize(m);
	for (i = 0; i < m; i++)
	{
		cin >> B[i];
	}
}

void run()
{
	sort(A.begin(), A.end());
	int i;
	for (i = 0; i < m; i++)
	{
		int result;
		if (binary_search(A.begin(), A.end(), B[i]))
		{
			result = 1;
		}
		else
		{
			result = 0;
		}
		cout << result << '\n';
	}
}

int main()
{
	input();
	run();
	return 0;
}