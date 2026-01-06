#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;

	long long min_num = min(a, b);
	long long max_num = max(a, b);

	long long cnt = max_num - min_num - 1;

	if (cnt < 0)
	{
		cnt = 0;
	}

	cout << cnt << endl;

	for (long long i = min_num + 1; i <= max_num - 1; i++)
	{
		cout << i << " ";
	}

	return 0;
}