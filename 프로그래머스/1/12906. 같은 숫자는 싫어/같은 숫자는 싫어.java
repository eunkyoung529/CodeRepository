import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        // int[] answer = {};
        int[] answer = new int[arr.length];
        int count = 0;
        
        for (int i = 0; i < arr.length; i++) {
            if (i == 0 || arr[i] != arr[i-1]) {
                answer[count] = arr[i];
                count++;
            }
        }
        
        
       return Arrays.copyOf(answer, count);
            
        
        // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
        // for(int i = 0; i < answer.length; i++) {
        //     System.out.println(answer[i]);
        // }
        

        // return answer;
    }
}