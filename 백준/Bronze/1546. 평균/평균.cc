#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<double> A;
double result = 0;

void run()
{
	int i;
	double max_score = 0;
	double sum = 0;

	for (i = 0; i < n; i++)
	{
		if (A[i] > max_score)
		{
			max_score = A[i];
		}
		sum += A[i];
	}

	result = (sum * 100.0) / max_score / n;
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
	cout << result << "\n";

	return 0;
}