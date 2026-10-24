class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        // String[] answer = {};
        // answer = new String[n];
       String[] answer = new String[n];
        // int[] a = new int[arr1.length];
        // int[] b = new int[arr2.length];
        
        for (int i = 0; i < n; i++) {
            answer[i] = "";
            
            int a = arr1[i];
            int b = arr2[i];
            for (int j = 0; j < n; j++) {                
                if (a % 2 == 1 || b % 2 == 1) {
                    answer[i] = "#" + answer[i];
                }
                else {
                    answer[i] = " " + answer[i];
                }
                
                a = a / 2;
                b = b / 2;
            }
        }
        
        return answer;
    }
}