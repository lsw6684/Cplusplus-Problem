#include<algorithm>
#include<iostream>
#include<queue>
#define endl '\n'
#define X first
#define Y second

using namespace std;

int board[502][502], vis[502][502];
int n, m, tmp, num = 0, mx = 0;
int nx[4] = { 1, 0, -1, 0 };
int ny[4] = { 0, 1, 0, -1 };

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	queue<pair<int, int>> Q;
	cin >> m >> n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> board[i][j];


	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 0 || vis[i][j] == 1) continue;

			Q.push({ i,j });
			vis[i][j]=1;
			num++;
			tmp = 0;
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				tmp++;
				for (int k = 0; k < 4; k++) {
					int dx = cur.X + nx[k];
					int dy = cur.Y + ny[k];
					if (dx < 0 || dy < 0 || dx >= m || dy >= n
						|| board[dx][dy] ==0 || vis[dx][dy]==1)
						continue;
					vis[dx][dy] = 1;
					Q.push({ dx,dy });
				}
			}
			mx = max(mx, tmp);
		}
	}
	cout << num << endl << mx;
}