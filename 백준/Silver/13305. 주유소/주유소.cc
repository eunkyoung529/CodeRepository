#include <iostream>

#define N 100001

using namespace std;

long long road[N];
long long gas[N];

int n;

long long dist = 0;

void input()

{

int i;

cin >> n;

for (i = 1; i <= n-1; i++)

{

cin >> road[i];

}

for (i = 1; i <= n; i++)

{

cin >> gas[i];

}

}

void run()

{

int i;

for (i = 2; i <= n; i++)

{

gas[i] = min(gas[i], gas[i - 1]);

}

for (i = 1; i < n; i++)

{

dist += (gas[i] * road[i]);

}

cout << dist;

}

int main()

{

input();

run();

}