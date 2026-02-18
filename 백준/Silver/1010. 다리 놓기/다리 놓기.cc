#include <iostream>
using namespace std;
int n, m, T;

void run()
{
	int result = 1, i;
	for (i = 0; i < n; i++)
	{
		result *= (m - i);
		result /= (i + 1);
	}

	cout << result << "\n";
}

int main()
{
	int i;
	cin >> T;
	for (i = 0; i < T; i++)
	{
		cin >> n >> m;
		run();
	}

	return 0;

}