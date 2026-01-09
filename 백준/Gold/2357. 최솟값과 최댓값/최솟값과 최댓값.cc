#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int mintree[400001], maxtree[400001], A[100001]; // A배열은 n개의 정수들이 있음.
int n, m;
#define INF 1000000001

void makemintree(int node, int start, int end) //최솟값이 먼저 오도록 하는 트리: 자식노드 2개 중 작은 숫자가 부모노드로 올라가는 구조
{
	if (start == end)
	{
		mintree[node] = A[start];
		return;
	}
	int mid = (start + end) / 2;
	makemintree(2 * node, start, mid);
	makemintree(2 * node + 1, mid + 1, end);
	mintree[node] = min(mintree[2 * node], mintree[2 * node + 1]);

}

void makemaxtree(int node, int start, int end) //최댓값이 먼저 오도록 하는 트리 : 자식노드 2개 중에서 큰 숫자가 부모노드로 올라가는 구조
{
	if (start == end)
	{
		maxtree[node] = A[start];
		return;
	}
	int mid = (start + end) / 2;
	makemaxtree(2 * node, start, mid);
	makemaxtree(2 * node + 1, mid + 1, end);
	maxtree[node] = max(maxtree[2 * node], maxtree[2 * node + 1]);
}

int find_min(int node, int start, int end, int left, int right) //범위 a에서부터 b까지에서 최솟값 찾기함수
{
	if (left <= start && end <= right)
	{
		return mintree[node];
	}
	//min 연산 영향x => 가장 큰 값 반환.
	if (end < left || start > right)
	{
		return INF;
	}
	int mid = (start + end) / 2;
	return min(find_min(2 * node, start, mid, left, right), find_min(2 * node + 1, mid + 1, end, left, right));
}

int find_max(int node, int start, int end, int left, int right)//범위 a에서부터 b까지에서 최댓값 찾기함수
{
	if (left <= start && end <= right)
	{
		return maxtree[node];
	}
	//max 연산에 영향x -> 가장 작은값 반환.
	if (end < left || start > right)
	{
		return -INF;
	}
	int mid = (start + end) / 2;
	return max(find_max(2 * node, start, mid, left, right), find_max(2 * node + 1, mid + 1, end, left, right));
}

void input()
{
	//cin >> n >> m;
	scanf("%d %d", &n, &m);
	int i;
	for (i = 1; i <= n; i++)
	{
		/*cin >> A[i];*/
		scanf("%d", &A[i]);
	}
}

void run()
{
	makemintree(1, 1, n); //구간을 1로 설정
	makemaxtree(1, 1, n);
	int i;
	for (i = 0; i < m; i++)
	{
		int a, b;
		/*cin >> a >> b;*/
		scanf("%d %d", &a, &b);
		printf("%d %d\n", find_min(1, 1, n, a, b), find_max(1, 1, n, a, b));
		//cout << find_min(1, 1, n, a, b) << ' ' << find_max(1, 1, n, a, b) << "\n";
	}
}

int main()
{
	input();
	run();
	return 0;
}