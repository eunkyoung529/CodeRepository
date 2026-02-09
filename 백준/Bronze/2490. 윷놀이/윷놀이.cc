#include <iostream>
#include <vector>
using namespace std;

vector<int> arr(4);

void run()
{
	int cnt = 0, i;
	for (i = 0; i < 4; i++)
	{
		if (arr[i] == 0)
		{
			cnt++;
		}
	}

	if (cnt == 1)
	{
		cout << "A" << "\n";
	}
	else if (cnt == 2)
	{
		cout << "B" << "\n";
	}
	else if (cnt == 3)
	{
		cout << "C" << "\n";
	}
	else if (cnt == 4)
	{
		cout << "D" << "\n";
	}
	else
	{
		cout << "E" << "\n";
	}
}

int main()
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cin >> arr[j];
		}

		run();
	}
	return 0;
}