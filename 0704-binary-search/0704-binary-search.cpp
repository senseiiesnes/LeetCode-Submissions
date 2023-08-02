class Solution {
public:
    int binSearch(vector<int>& a, int low, int high, int target){
        if(low>high) return -1;
        int mid = (low+high) / 2;
        if(a[mid] == target) return mid;
        else if(a[mid] > target) return binSearch(a, low, mid-1, target);
        else return binSearch(a, mid+1, high, target);
    }
    int search(vector<int>& nums, int target) {
        return binSearch(nums, 0, nums.size()-1, target);
    }
};