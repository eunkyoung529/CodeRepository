class Solution {
    static int answer = 0;
    public int solution(int k, int[][] dungeons) {
        // int answer = -1;
        
        int count = 0;
        boolean[] visited = new boolean[dungeons.length];
        
        
        dfs(k, count, dungeons, visited);
         
        return answer;
    }
    
    public void dfs(int k, int count, int[][] dungeons, boolean[] visited) {
        answer = Math.max(answer, count);
        
        for (int i = 0; i < dungeons.length; i++) {
            if (visited[i]) {
                continue;
            }
            
            if (k < dungeons[i][0]) {
                continue;
            }
            
            visited[i] = true;
            dfs(k - dungeons[i][1], count + 1, dungeons, visited);
            visited[i] = false;
        }
    }
}