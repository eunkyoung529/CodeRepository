#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> A;
int k;
int sum = 0;

void run()
{
	int i;
	stack<int> s;
	for (i = 0; i < k; i++)
	{
		int num = A[i];
		if (num == 0)
		{
			s.pop();
		}
		else
		{
			s.push(num);
		}
	}
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
}


int main()
{
	int i;
	cin >> k;
	A.resize(k);
	for (i = 0; i < k; i++)
	{
		cin >> A[i];
	}

	run();
	cout << sum << "\n";
	return 0;
}