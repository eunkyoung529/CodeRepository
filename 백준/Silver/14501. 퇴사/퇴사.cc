#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> T;
vector<int> P;
vector<int> d;

void dp()
{
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		int time = T[i];
		int pay = P[i];
		int date = i + time;

		if (date <= n)
		{
			d[i] = max(d[i + 1], pay + d[date]);
		}
		else
		{
			d[i] = d[i + 1];
		}
	}
}

int main()
{
	int i;
	cin >> n;
	T.resize(n);
	P.resize(n);
	d.resize(n + 1, 0);

	for (i = 0; i < n; i++)
	{
		cin >> T[i] >> P[i];
	}

	dp();

	cout << d[0] << "\n";

	return 0;
}