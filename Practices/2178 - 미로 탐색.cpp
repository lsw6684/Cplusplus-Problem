#include<algorithm>
#include<iostream>
#include<queue>
#define X first
#define Y second
using namespace std;

int n, m, result, tmp=0;
int board[102][102];
int vis[102][102];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m;
    string s;
    for(int i = 0 ; i < n; i++)
    {
        cin >> s;
        for(int j = 0 ; j < m; j++)
            board[i][j] = s[j] - '0';        
    }

    queue<pair<int, int>> Q;
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < m; j++) {
            if(!board[i][j] || vis[i][j])
                continue;
        vis[i][j] = 1;
        Q.push({i, j});
        while(!Q.empty()) {
            pair<int, int> cur = Q.front(); Q.pop();
            for(int k = 0 ; k < 4; k++) {
                int nx = cur.X + dx[k];
                int ny = cur.Y + dy[k];
                if(nx < 0 || ny < 0 || nx >= n || ny >= m
                  || !board[nx][ny] || vis[nx][ny])
                    continue;
                board[nx][ny] = board[cur.X][cur.Y] + 1;
                Q.push({nx, ny});
                vis[nx][ny] = 1;
            }
        }
        }
    }

    cout << board[n-1][m-1];
}