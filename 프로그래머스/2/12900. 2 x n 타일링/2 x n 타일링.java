class Solution {
    public int solution(int n) {
        int answer = 0;
        
        int a = 1;
        int b = 2;
        
        if (n == 1) {
            return 1;
        }
        
        if (n == 2) {
            return 2;
        }
        
        for (int i = 3; i <= n; i++) {
            answer = (int) (((long) a + b) % 1000000007);
            a = b;
            b = answer;
            
        }
        
        
        return answer;
    }
}