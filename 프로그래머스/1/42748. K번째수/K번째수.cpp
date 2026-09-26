#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (auto& cmd : commands) {
        int i = cmd[0], j = cmd[1], k = cmd[2];
        vector<int> part(array.begin() + (i-1), array.begin() + j);
        for(int pass_i = 0; pass_i + 1 < (int)part.size(); pass_i++)
            for(int pos = 0; pos + 1 < (int)part.size() - pass_i; pos++)
                if(part[pos] > part[pos+1])
                    swap(part[pos], part[pos+1]);
        answer.push_back(part[k-1]);
    }
    
    return answer;
}
