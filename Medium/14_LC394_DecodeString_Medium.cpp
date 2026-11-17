class Solution {
public:
    string decodeString(string s) {
        stack<pair<int, string>> track; 
        string curr_str = ""; 
        int curr_num = 0; 

        for (int i=0; i<s.size(); i++) 
        {
            if (s[i] >= '0' && s[i] <= '9') 
            {
                curr_num = curr_num * 10 + (int)(s[i] - '0'); 
            } 
            else if (s[i] == '[') 
            {
                pair<int, string> curr(curr_num, curr_str); 
                track.push(curr); 
                curr_str = ""; 
                curr_num = 0; 
            }
            else if (s[i] == ']') 
            {
                pair<int, string> prev = track.top(); 
                track.pop(); 
                string repeated = curr_str; 
                curr_str = prev.second; 
                for (int i = 0; i < prev.first; i++) 
                {curr_str += repeated;  
                }
            }
            else curr_str += s[i]; 
        }

        return curr_str;
    }
};