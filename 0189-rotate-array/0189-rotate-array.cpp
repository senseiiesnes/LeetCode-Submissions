class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        k=nums.size()-k;
        vector<int> temp;
        for(int i=0;i<k;i++){
            temp.push_back(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            nums[i-k]=nums[i];
        }
        for(int i=nums.size()-k;i<nums.size();i++){
            nums[i]=temp[i-(nums.size()-k)];
        }
        return nums;
    }
};