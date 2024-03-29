// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
// int goX[] = {-1,0,0,1};
// int goY[] = {0,1,-1,0};

// int main() {
// 	int N, M; cin >> M >> N;
// 	vector<vector<int>> board;
// 	queue<pair<int, int>> q;
// 	int answer = 0;
// 	bool visited[1001][1001] = { false };
// 	for (int i = 0; i < N; i++) {
// 		vector<int> list;
// 		for (int k = 0; k < M; k++) {
// 			int n; cin >> n;
// 			if (n > 0) {
// 				q.push({ i,k });
// 			}
// 			list.push_back(n);
// 		}
// 		board.push_back(list);
// 	}
// 	while (!q.empty()) {
// 		int x = q.front().first, y = q.front().second;
// 		q.pop();
// 		for (int i = 0; i < 4; i++) {
// 			int nx = x + goX[i];
// 			int ny = y + goY[i];
// 			if (0 <= nx && nx < N && 0 <= ny && ny < M && !visited[nx][ny]) {
// 				visited[nx][ny] = true;
// 				if (board[nx][ny] == 0 || board[nx][ny] >= board[x][y]+1) {
// 					board[nx][ny] = board[x][y] + 1;
// 					answer = max(answer, board[nx][ny]);
// 					q.push({ nx,ny });
// 				}
// 			}
// 		}
// 	}
// 	int date = 0;
// 	for (int i = 0; i < N; i++) {
// 		for (int k = 0; k < M; k++) {
// 			if (board[i][k] == 0) {
// 				cout << -1 << endl;
// 				return 0;
// 			}
// 			date = max(date, board[i][k]);
// 		}
// 	}
// 	cout << date-1 << endl;
// 	return 0;
// }
