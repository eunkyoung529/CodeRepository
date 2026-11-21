import java.util.Scanner;

class Solution {
    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        int T = sc.nextInt();
        
        for (int test_case = 1; test_case <= T; test_case++) {
            int N = sc.nextInt();
            
            int[] arr = new int[N];
            
            for (int i = 0; i < N; i++) {
                arr[i] = sc.nextInt();
            }
            long profit = 0;
            int maxPrice = 0;
            
            for (int i = N - 1; i >= 0; i--) {
                if (arr[i] > maxPrice) {
                    maxPrice = arr[i];
                }
                else {
                    profit += maxPrice - arr[i];
                }
            }
            
            System.out.println("#" + test_case + " " + profit);
        }
        sc.close();
    }
    
}