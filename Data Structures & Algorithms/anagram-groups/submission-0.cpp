class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(const string&s:strs){
            vector<int> count(26,0);
            for(char c:s){
                count[c - 'a']++;
            }
            string key = "";
            for(int i=0;i<26;i++){
                key+= "#" + to_string(count[i]);
            }
            mp[key].push_back(s);
        }
        vector<vector<string>> res;
        for(auto&pair :mp){
            res.push_back(pair.second);
        }
        return res;
    }
};
