class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        unordered_set<char> set;
        int l=0;
        for(int r=0;r<s.size();r++){
            while(set.find(s[r])!=set.end()){
                set.erase(s[l]);
                l++;
            }
            set.insert(s[r]);
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
