#include <iostream>
#include <vector>
using namespace std;

int T;
vector <int> a;
vector<int> b;

int main()
{
	int i;
	cin >> T;

	a.resize(T);
	b.resize(T);

	for (i = 0; i < T; i++)
	{
		cin >> a[i] >> b[i];
	}

	for (i = 0; i < T; i++)
	{
		cout << "Case #" << i + 1 << ": " << a[i] << " + " << b[i] << " = " << a[i] + b[i] << "\n";
	}

	return 0;
}