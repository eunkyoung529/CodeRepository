#include <iostream>
#include <vector>
using namespace std;
int n, sum = 0;
vector<char> A;

void run()
{
	int i;
	for (i = 0; i < n; i++)
	{
		int num = A[i] - '0';
		sum += num;
	}
}

int main()
{
	int i;
	cin >> n;
	A.resize(n);

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	run();

	cout << sum << "\n";
	return 0;
}