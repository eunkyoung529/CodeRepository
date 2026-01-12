#include <iostream>
#include <algorithm>
using namespace std;
int n;
int A[301];
int dp[301];

int main()
{
	int i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> A[i];
	}
	
	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			dp[i] = A[1];
		}
		else if (i == 2)
		{
			dp[i] = A[1] + A[2];
		}
		else if (i == 3)
		{
			dp[i] = max(dp[i - 2] + A[i], A[2] + A[3]);
		}
		else
		{
			dp[i] = max(dp[i - 2], dp[i - 3] + A[i-1]) + A[i];
		}
	}

	cout << dp[n] << "\n";

	return 0;

}