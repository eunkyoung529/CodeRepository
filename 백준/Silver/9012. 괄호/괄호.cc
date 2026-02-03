#include <iostream>
#include <string>
#include <stack>

using namespace std;

int T;
string s;

void run()
{
	int i;
	stack<char> A;
	int check = 1;

	for (i = 0; i < s.length(); i++)
	{
		char c = s[i];
		if (c == '(')
		{
			A.push(c);
		}
		else
		{
			if (!A.empty())
			{
				A.pop();
			}
			else
			{
				check = 0;
				break;
			}
		}
	}

	if (check == 1 && A.empty())
	{
		cout << "YES" << "\n";
	}
	else
	{
		cout << "NO" << "\n";
	}
}


int main()
{
	int i;
	cin >> T;
	for (i = 0; i < T; i++)
	{
		cin >> s;
		run();
	}

	return 0;
}