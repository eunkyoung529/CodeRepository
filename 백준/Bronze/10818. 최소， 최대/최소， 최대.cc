#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> A;

int main()
{
	int i;
	cin >> n;
	A.resize(n);
	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	int min = A[0];
	int max = A[0];

	for (i = 0; i < n; i++)
	{
		if (min > A[i])
		{
			min = A[i];
		}
		if (max < A[i])
		{
			max = A[i];
		}
	}
	
	cout << min << " " << max << "\n";

	return 0;
}