class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        // String[] answer = {};
        // answer = new String[n];
       String[] answer = new String[n];
        int[] a = new int[n];
        int[] b = new int[n];
        
        for (int i = 0; i < n; i++) {
            answer[i] = "";
            for (int j = n-1; j >= 0; j--) {
                a[j] = arr1[i] % 2;
                b[j] = arr2[i] % 2;
                
                if (a[j] == 1 || b[j] == 1) {
                    answer[i] = "#" + answer[i];
                }
                else {
                    answer[i] = " " + answer[i];
                }
                
                arr1[i] = arr1[i] / 2;
                arr2[i] = arr2[i] / 2;                
            }
        }
        
        return answer;
    }
}