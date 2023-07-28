class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<int, int> mpp;
        mpp[0]=1;
        int cnt=0,preSum=0;
        for(int i=0;i<a.size();i++){
            preSum+=a[i];
            int rem = preSum-k;
            cnt+=mpp[rem];
            mpp[preSum]++;
        }
        return cnt;
    }
};