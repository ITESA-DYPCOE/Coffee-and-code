class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == "") return 0;
        int i = 0, j = 0;
        unordered_map<char, int> mp;
        mp[s[0]] = 1;
        int mx = 1;
        cout<<mp.size();
        while(j < s.length()){
            if(mp.size() < j-i+1){
                while(mp.size() < j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
                
            }
            else if(mp.size() == j-i+1){
                mx = max(mx, j-i+1);
                j++;
                if(j == s.length()) break;
                if(mp.find(s[j]) != mp.end()){
                    mp[s[j]]++;
                }
                else{
                    mp[s[j]] = 1;
                }
                
            }
            else if(mp.size() > j-i+1){
                //not possible   
            }
        }
        
        return mx;
    }
};
