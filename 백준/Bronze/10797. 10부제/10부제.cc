#include <iostream>
using namespace std;

int n;
int arr[5];

int main()
{
	int i, cnt = 0;

	cin >> n;
	for (i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (i = 0; i < 5; i++)
	{
		if (arr[i] == n)
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}