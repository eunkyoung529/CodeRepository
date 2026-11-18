// class Solution {
//     int[][] visited;
//     int[] dx = {-1, 1, 0, 0};
//     int[] dy = {0, 0, -1, 1};
//     public int solution(int n) {
//         int answer = 0;
//         int[][] visited = new int[n][n];
        
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (visited[i][j] == 0) {
//                     dfs(i, j, n);
//                 }
//                 else {
//                     continue;
//                 }
//             }
//         }
        
//         return answer;
//     }
//     public void dfs(int x, int y, int n) {
//         visited[x][y] = 1;
        
//         for (int i = 0; i < 4; i++) {
//             x = x + dx[i];
//             y = y + dy[i];
//             if (x < 0 || x > n || y < 0 || y > n) {
//                 continue;
//             }
//             else {
//                 visited[x][y] = 1;
//             }
//         }    
        
//     }
// }

class Solution {
    int[][] board;
    int answer = 0;
    
    public int solution(int n) {
        board = new int[n][n];
        
        dfs(0, n);
        
        return answer;
    }
    
    public void dfs(int row, int n) {
        if (row == n) {
            answer++;
            return;
        }
        
        for (int col = 0; col < n; col++) {
            if (check(row, col, n)) {
                board[row][col] = 1;
                
                dfs(row+1, n);
                
                board[row][col] = 0;
            }
        }
    }
    
    public boolean check(int row, int col, int n) {
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 1) {
                return false;
            }
        }
        
        int x = row - 1;
        int y = col - 1;
        
        while (x >= 0 && y >= 0) {
            if (board[x][y] == 1) {
                return false;
            }
            x--;
            y--;
        }
        
        x = row - 1;
        y = col + 1;
        
        while (x >= 0 && y < n) {
            if (board[x][y] == 1) {
                return false;
            }
            
            x--;
            y++;
        }
        return true;
        
    }
}