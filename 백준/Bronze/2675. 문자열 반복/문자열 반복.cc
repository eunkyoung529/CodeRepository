#include <iostream>
#include <string>
using namespace std;

int T;
int R;
string S;

int main()
{
	int i, j, k;
	cin >> T;
	for (i = 0; i < T; i++)
	{
		cin >> R >> S;
		for (j = 0; j < S.length(); j++)
		{
			for (k = 0; k < R; k++)
			{
				cout << S[j];
			}
		}
		cout << "\n";
	}

	return 0;
}