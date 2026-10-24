class Solution {
    public int solution(int n, int[] money) {
        int answer = 0;
        int length = money.length;
        int[] dp = new int[n+1];
        dp[0] = 1;
        
        for (int i = 0; i < length; i++) {
            for (int j = money[i]; j <= n; j++) {
                dp[j] = (dp[j] + dp[j - money[i]]) % 1000000007;
            }
        }
        
        answer = dp[n];
        
        return answer;
    }
}