class Solution {
    int solution(int[][] land) {
        int answer = 0;
        int n = land.length;
        
        int[][] dp = new int[n][4];
       
        for (int i = 0; i < 4; i++) {
            dp[0][i] = land[0][i];
        }
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                int max = 0;
                for (int k = 0; k < 4; k++) {
                    if (j != k) {
                        max = Math.max(max, dp[i-1][k]);
                    }
                }
                dp[i][j] = land[i][j] + max;
            }
        }
        
        
        
        for (int i = 0; i < 4; i++) {
            if (answer < dp[n-1][i]) {
                answer = dp[n-1][i];
            }
        }
        // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
        // System.out.println("Hello Java");
        return answer;
    }
}