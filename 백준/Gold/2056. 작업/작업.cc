#include <iostream>
#include <vector>
#include <queue>
#define N 10001
using namespace std;

int cnt[N], val[N]; //간선 도착, 시간
vector<int>A[N]; //graph
int n;
void input()
{
	cin >> n;
	int i, j;
	for (i = 1; i <= n; i++)
	{
		int a, b;
		cin >> a >> b;
		val[i] = a;
		int m = 0;
		for (j = 1; j <= b; j++)
		{
			int c;
			cin >> c;
			m = max(m, val[c]);
			//선행 작업의 최댓값
		}
		val[i] += m;
	}
	int m = 0;
	for (i = 1; i <= n; i++) {
		m = max(val[i], m);
	}//작업의 최댓값
	cout << m;
}

int main()
{
	input();

}