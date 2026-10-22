class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        // String[] answer = {};
        // answer = new String[n];
        String[] answer = new String[n];
        int[] a = new int[n];
        int[] b = new int[n];
        
        for (int i = 0; i < n; i++) {
            answer[i] = "";
            for (int j =0; j < n; j++ ) {
                a[n-j-1] = arr1[i] % 2;
                b[n-j-1] = arr2[i] % 2;
                
                if (a[n-j-1] == 1 || b[n-j-1] == 1) {
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