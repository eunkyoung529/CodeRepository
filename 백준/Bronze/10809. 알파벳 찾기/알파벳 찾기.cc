#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s;
vector <int>A;

void run()
{
	int i;
	for (i = 0; i < s.length(); i++)
	{
		int m = s[i] - 'a';

		if (A[m] == -1)
		{
			A[m] = i;
		}
	}
}

int main()
{
	int i;
	cin >> s;
	// 크기 설정 및 -1로 초기화
	A.resize(26, -1);

	run();

	for (i = 0; i < 26; i++)
	{
		cout << A[i] << " ";
	}

	return 0;
}