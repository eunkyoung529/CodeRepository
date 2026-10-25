import java.util.*;
class Solution {
    int[][] visited;
    int[] nx = {-1, 1, 0, 0};
    int[] ny = {0, 0, -1, 1};
    int sum;
    
    public int[] solution(String[] maps) {
        int n = maps.length;
        int m = maps[0].length();
        visited = new int[n][m];
        
        List<Integer> result = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (maps[i].charAt(j) != 'X' && visited[i][j] == 0) {
                    sum = 0;
                    dfs(maps, i, j);
                    result.add(sum);
                }
            }
        }
        
        if (result.isEmpty()) {
            return new int[]{-1};
        }
        Collections.sort(result);
        
        int[] answer = new int[result.size()];
        
        for (int i = 0; i < result.size(); i++) {
            answer[i] = result.get(i);
        }
        
        
        return answer;
    }
    public void dfs(String[] maps, int x, int y) {
        visited[x][y] = 1;
        sum += maps[x].charAt(y) - '0';
        
        for (int i = 0; i < 4; i++) {
            int dx = x + nx[i];
            int dy = y + ny[i];
            
            if (dx < 0 || dx >= maps.length || dy < 0 || dy >= maps[0].length()) {
                continue;
            }
            
            if (maps[dx].charAt(dy) == 'X' || visited[dx][dy] == 1) {
                continue;
            }
            dfs(maps, dx, dy);
        }
        
    }
    
}