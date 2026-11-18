import java.util.*;
class Solution {
    
    int[] dx = {-1, 1, 0, 0};
    int[] dy = {0, 0, -1, 1};
    int[][] visited;
    int[][] map;
    int sum = 0;
    public int[] solution(String[] maps) {
        // int[] answer = {};
        int n = maps.length;
        int m = maps[0].length();
        visited = new int[n][m];
        map = new int[n][m];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (maps[i].charAt(j) == 'X') {
                    map[i][j] = 0;
                }
                else {
                    map[i][j] = maps[i].charAt(j) - '0';
                }
            }
        }
        
        ArrayList<Integer> answer = new ArrayList<>();
        
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         System.out.print(visited[i][j]);
        //     }
        // }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j] == 0 && map[i][j] != 0) {
                    int sum = dfs(i, j, n, m);
                    answer.add(sum);
                }
            }
        }
        
        if (answer.isEmpty()) {
            return new int[]{-1};
        }
        
        Collections.sort(answer);
        
        int[] result = new int[answer.size()];
        
        for (int i = 0; i < answer.size(); i++) {
            result[i] = answer.get(i);
        }
        
        // return answer;
        return result;
    }
    
//     public void dfs(int x, int y, int n) {
//         sum = map[x][y];
//         visited[x][y] = 1;
        
//         for (int i = 0; i < 4; i++) {
//             int x = x + dx[i];
//             int y = y + dy[i];
            
//             if (x < 0 || x > n || y < 0 || y > n) {
//                 continue;
//             }
//             else {
//                 sum += map[x][y];
//                 visited[x][y] = 1;
//             }
//         }
//     }
    
    public int dfs(int x, int y, int n, int m) {
        visited[x][y] = 1;
        
        int sum = map[x][y];
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                continue;
            }
            if (map[nx][ny] == 0 || visited[nx][ny] == 1) {
                continue;
            }
            
            sum += dfs(nx, ny, n, m);
        }
        
        return sum;
    }
}