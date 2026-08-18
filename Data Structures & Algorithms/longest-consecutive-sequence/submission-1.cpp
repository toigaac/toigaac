class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset;
        int ans=0;
        for(int n:nums){
            numset.insert(n);
        }
        for(int num:numset){
            if(numset.find(num-1)==numset.end()){
                int lenght=1;
                while(numset.find(num+lenght)!=numset.end()){
                    lenght++;
                }
                ans=max(ans,lenght);
            }
        }
        return ans;
    }
};
