#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> v;

int main()
{
	int i;
	cin >> n;

	v.resize(n);
	for (i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (i = 0; i < n; i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}