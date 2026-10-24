class Solution {
    public long solution(int n) {
        long answer = 0;
        long a = 1;
        long b = 2;
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        for (int i = 3; i <= n; i++) {
            answer = (a + b) % 1234567;
            a = b;
            b = answer;
        }
        
        
        return answer;
    }
}