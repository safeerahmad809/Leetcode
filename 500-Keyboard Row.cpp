class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        int n = words.size();
        unordered_map<char, int> m;
        vector<string> ans;
        
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        
        
        for(auto ch: row1){
            m[ch] = 1; 
            m[toupper(ch)] = 1;
        }
        for(auto ch: row2){
            m[ch] = 2;
            m[toupper(ch)] = 2;
        }
        for(auto ch: row3){
            m[ch] = 3;
            m[toupper(ch)] = 3;
        }
        int flag = 0;
        
        for(auto ch: words){
            for(int j=0; j<ch.size()-1; j++){
                if(m[ch[j]] != m[ch[j+1]]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                ans.push_back(ch);
            flag = 0;
        }
        
        return ans;
    }
};
