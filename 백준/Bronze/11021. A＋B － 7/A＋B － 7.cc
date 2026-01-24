#include <iostream>
using namespace std;

int main()
{
	int t, i;
	cin >> t;

	for (i = 1; i <= t; i++)
	{
		int a, b;
		cin >> a >> b;

		cout << "Case #" << i << ": " << a + b << "\n";
	}

	return 0;
}