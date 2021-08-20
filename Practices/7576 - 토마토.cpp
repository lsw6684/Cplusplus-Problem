#include<algorithm>
#include<iostream>
#include<queue>
#define endl '\n'
#define X first
#define Y second

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int board[1002][1002];

int m, n, day = 0;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  queue<pair<int, int>> Q;
  cin >> n >> m;

  for(int i = 0 ; i < m; i++)
    for(int j = 0; j < n; j++){
      cin >> board[i][j];
      if(board[i][j]==1)
        Q.push({i, j});
    }
  while(!Q.empty()) {
    pair<int, int> cur = Q.front(); Q.pop();
    for(int k = 0; k < 4; k++) {
      int nx = cur.X + dx[k];
      int ny = cur.Y + dy[k];
      if(nx < 0 || ny < 0 || nx >= m || ny >= n
      || board[nx][ny] != 0 )
      continue;
      board[nx][ny] = board[cur.X][cur.Y] + 1;
      Q.push({nx, ny});
      
    
    }
  }
  for(int i = 0 ; i < m; i++)
    for(int j = 0 ; j < n; j++) {
      if(!board[i][j]) {
        cout << -1;
        return 0;
      }
      day = max(board[i][j], day);
    }
  cout << day-1;
}
