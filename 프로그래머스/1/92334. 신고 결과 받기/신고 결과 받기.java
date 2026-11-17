import java.util.*;
class Solution {
    public int[] solution(String[] id_list, String[] report, int k) {
        // int[] answer = {};
        HashMap<String, HashSet<String>> reportMap = new HashMap<>();
        
        HashMap<String, Integer> countMap = new HashMap<>();
        
        for (String id : id_list) {
            reportMap.put(id, new HashSet<>());
            countMap.put(id, 0);
        }
        
        for (String r : report) {
            String[] arr = r.split(" ");
            
            String reporter = arr[0];
            String reported = arr[1];
            
            if (reportMap.get(reporter).add(reported)) {
                countMap.put(reported, countMap.get(reported) + 1);
            }
        }
        
        int[] answer = new int[id_list.length];
        
        for (int i = 0; i < id_list.length; i++) {
            String id = id_list[i];
            
            for (String reported : reportMap.get(id)) {
                if (countMap.get(reported) >= k) {
                    answer[i]++;
                }
            }
        }
        
        
        return answer;
    }
}