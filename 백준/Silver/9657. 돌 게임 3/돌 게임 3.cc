#include <iostream>

using namespace std;

int game[1001];

int n;

void input()

{

cin >> n;

}


void run()

{

int i;

game[1] = 1;

game[3] = 1;

game[4] = 1;


for (i = 5; i <= n; i++)

{

if (game[i - 1] == 0 || game[i - 3] == 0 || game[i - 4] == 0)

{

game[i] = 1; //세 경우의 수 중 상대를 패배시킬 수 있다면 무조건 1


}

else

{

game[i] = 0;

}

}

if (game[n] == 1)

{

cout << "SK";

}

else

{

cout << "CY";

}


}


int main()

{

input();

run();

}