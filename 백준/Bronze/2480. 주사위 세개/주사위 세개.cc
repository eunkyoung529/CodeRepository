#include <iostream>
using namespace std;
int a, b, c;

int main()
{
	int tmp;

	cin >> a >> b >> c;
	if ((a == b) && (b == c) && (a == c))
	{
		cout << 10000 + a * 1000;
	}
	else if ((a == b) || (b == c) || (a == c))
	{
		if (a == b)
		{
			cout << 1000 + a * 100;
		}
		else if (b == c)
		{
			cout << 1000 + b * 100;
		}
		else if (a == c)
		{
			cout << 1000 + a * 100;
		}
	}
	else if ((a != b) && (b != c) && (a != c))
	{
		int tmp;
		tmp = a;
		if (tmp < b)
		{
			tmp = b;
		}
		if (tmp < c)
		{
			tmp = c;
		}

		cout << tmp * 100;

	}
	return 0;

}