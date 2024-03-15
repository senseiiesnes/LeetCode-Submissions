class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> mpp;
        vector<int> ans;
        int cnt = 0;
        int pairs = 0;
        for(int i=0;i<nums.size();i++) mpp[nums[i]]++;
        for(auto it:mpp){
            pairs += it.second/2;
            cnt += it.second%2;
            // cout<<it.first<<" "<<it.second<<endl;
        }
        ans.push_back(pairs);
        ans.push_back(cnt);
        return ans;
    }
};