class Solution {
public:
    int checkSum(vector<int>& arr, int d){
        int n = arr.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ceil((double)(arr[i]) / (double)(d));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int th) {
        int n = nums.size();
        if (n > th) return -1;
        int low = 1, high = *max_element(nums.begin(), nums.end());

        while (low <= high) {
            int mid = (low + high) / 2;
            if (checkSum(nums, mid) <= th) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};