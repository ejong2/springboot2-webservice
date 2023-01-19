#include <iostream>

#define MAX 101

using namespace std;

int MAP[MAX][MAX];
bool visited[MAX][MAX];

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = {1, 0, -1, 0};

int N;
int cnt = 1;
int direction = 0;

void DFS(int x, int y)
{
	MAP[x][y] = cnt++;
	visited[x][y] = true;

	int nx = x + dx[direction];
	int ny = y + dy[direction];

	if (nx == 0 || ny == 0 || nx > N || ny > N || visited[nx][ny] == true)
	{
		direction = (direction + 1) % 4;
		nx = x + dx[direction];
		ny = y + dy[direction];
	}

	if (nx > 0 && ny > 0 && nx <= N && ny <= N && visited[nx][ny] == false)
	{
		DFS(nx, ny);
	}
}

int main()
{
	cin >> N;

	DFS(1, 1);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cout.width(4);
			cout << MAP[i][j];
		}
		cout << '\n';
	}

	return 0;
}