#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n, i, num;

	cin >> n;

	stack<int> s;
	string a;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		if (a == "push")
		{
			cin >> num;
			s.push(num);
		}
		else if (a == "pop")
		{
			if (s.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (a == "size")
		{
			cout << s.size() << "\n";
		}
		else if (a == "empty")
		{
			cout << s.empty() << "\n";
		}
		else if (a == "top")
		{
			if (s.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << s.top() << "\n";
			}
		}
	}
	return 0;
}