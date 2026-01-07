#include <iostream>
#include <algorithm>
using namespace std;

int A[100001], B[100001];
int n;

void input()
{

	cin >> n;

	int i;

	for (i = 1; i <= n; i++)

	{

		cin >> A[i];

	}

}

void run()

{

	int i;

	for (i = 1; i <= n; i++)

	{

		B[i] = max(A[i], B[i - 1] + A[i]);

	}

	int target = -1001;

	for (i = 1; i <= n; i++)

	{

		target = max(target, B[i]);

	}

	cout << target;

}
int main()
{
	input();
	run();

	return 0;
}