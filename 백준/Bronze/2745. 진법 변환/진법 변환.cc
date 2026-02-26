#include <iostream>
#include <string>

using namespace std;

string N;
int B;
int result = 0;

int main()
{
	int i;
	cin >> N >> B;

	for (i = 0; i < N.length(); i++)
	{
		int num = 0;
		if (N[i] >= '0' && N[i] <= '9')
		{
			num = N[i] - '0';
		}
		else
		{
			num = N[i] - 'A' + 10;
		}

		result = result * B + num;
	}

	cout << result << "\n";
}