import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        // int[] answer = {};
        int[] temp = new int[arr.length];
        int count = 0;
        
        for (int i = 0; i < arr.length; i++) {
            // if (arr[i] == arr[i+1]) {
            //     continue;
            // }
            // else {
            //     answer[i] = arr[i];
            // }
            if (i == 0 || arr[i] != arr[i-1]) {
                temp[count] = arr[i];
                count++;
            }
        }
        
        // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
        // for(int i = 0; i < answer.length; i++) {
        //     System.out.println(answer[i]);
        // }
        

        // return answer;
        return Arrays.copyOf(temp, count);
    }
}