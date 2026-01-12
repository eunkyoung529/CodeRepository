#include <iostream>
using namespace std;
int k, n, m;

int main()
{
	cin >> k >> n >> m;
	int result;
	result = k * n - m;
	if (result > 0)
	{
		cout << result;
	}
	else
	{
		cout << '0';
	}

	return 0;
}