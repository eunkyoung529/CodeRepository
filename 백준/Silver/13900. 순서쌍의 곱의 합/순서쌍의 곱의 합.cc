#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
vector<long long> sum;
int n;
long long ans = 0;


int main()
{
	int i;
	cin >> n;

	arr.resize(n);
	sum.resize(n);

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	sum[0] = arr[0];
	for (i = 1; i < n; i++)
	{
		sum[i] = sum[i - 1] + arr[i];
	}

	for (i = 0; i < n - 1; i++)
	{
		ans += arr[i] * (sum[n - 1] - sum[i]);
	}


	cout << ans << "\n";

	return 0;
}