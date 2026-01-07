#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int result;
	cin >> a >> b >> c;

	result = a * b * c;
	int cnt[10] = { 0 };

	if (result == 0)
	{
		cnt[0]++;
	}
	
	while (result > 0)
	{
		int m = result % 10;
		cnt[m]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << cnt[i] << endl;
	}

	return 0;
}