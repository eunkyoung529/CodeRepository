#include <iostream>
using namespace std;

int n;
int main()
{
	int i;
	cin >> n;
	for (i = 1; i <= 9; i++)
	{
		cout << n << " * " << i << " = " << n * i << "\n";
	}

	return 0;
}