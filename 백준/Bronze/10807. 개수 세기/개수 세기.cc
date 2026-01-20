#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int A[101];

int main()
{
	int n, v, i, cnt = 0;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cin >> A[i];
	}

	cin >> v;

	for (i = 1; i <= n; i++)
	{
		if (v == A[i])
		{
			cnt++;
		}
	}

	cout << cnt;
	return 0;

}