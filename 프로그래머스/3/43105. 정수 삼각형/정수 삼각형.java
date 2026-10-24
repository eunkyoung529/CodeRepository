class Solution {
    public int solution(int[][] triangle) {
        int answer = 0;
//         int length = triangle.length;
//         int [][] dp = new int[length][length];
        
//         dp[0][0] = triangle[0][0];
        
        
//         for (int i = 0; i < length - 1; i++) {
//             for (int j = 0; j <= i; j++) {
//                 for (int k = j; k <= j+1; k++) {
//                     dp[i+1][k] = Math.max(dp[i+1][k], dp[i][j] + triangle[i+1][k]);
//                 }
//             }
//         }
        
//         for (int i = 0; i < length; i++) {
//             answer = Math.max(answer, dp[length-1][i]);
//         }
        
        
        int length = triangle.length;
        int[][] dp = new int[length][length];
        
        dp[0][0] = triangle[0][0];
        
        for (int i = 0; i < length - 1; i++) {
            for (int j = 0; j <= i; j++) {
                for (int k = j; k <= j+1; k++) {
                    dp[i+1][k] = Math.max(dp[i+1][k], dp[i][j] + triangle[i+1][k]);
                }
            }
        }
        
        for (int i = 0; i < length; i++) {
            answer = Math.max(answer, dp[length-1][i]);
        }
        
        return answer;
    }
}