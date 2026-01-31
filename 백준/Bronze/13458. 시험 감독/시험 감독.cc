#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> A;
int B, C;
long long result = 0;

void run()
{
	int i;
	for (i = 0; i < n; i++)
	{
		A[i] -= B;
		result++;

		if (A[i] > 0)
		{
			result += (A[i] / C);

			if (A[i] % C != 0)
			{
				result++;
			}
		}
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
	cin >> B >> C;
	run();
	cout << result << "\n";

	return 0;
}