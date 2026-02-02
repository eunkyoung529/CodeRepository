#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> A;
int result = 0;

void run()
{
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		if (A[i] <= k)
		{
			result += (k / A[i]);
			k = k % A[i];  // 남은돈
		}
	}
}

int main()
{
	int i;
	cin >> n >> k;
	A.resize(n);

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	run();

	cout << result << "\n";

	return 0;
}