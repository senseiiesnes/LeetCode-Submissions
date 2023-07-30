class Solution {
public:
    void merge(vector<int>& arr, int l, int m, int r){
        vector<int> temp;
        int left = l;
        int right = m + 1;
        while(left <= m && right <= r){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left <= m){
            temp.push_back(arr[left]);
            left++;
        }
        while(right <= r){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i = l; i <= r; i++){
            arr[i] = temp[i - l];
        }
    }

    int countPairs(vector<int>& arr, int low, int mid, int high){
        int cnt = 0;
        int right = mid + 1;
        for(int i=low; i<=mid; i++){
            while(right <= high && arr[i] > (long long)2 * (long long)arr[right]) right++;
            cnt += right - (mid + 1);
        }
        return cnt;
    }

    int mergeSort(vector<int>& arr, int l, int r) {
        int cnt = 0;
        if(l == r){
            return cnt;
        }
        int mid = (l + r) / 2;
        cnt += mergeSort(arr, l, mid);
        cnt += mergeSort(arr, mid+1, r);
        cnt += countPairs(arr, l, mid, r);
        merge(arr, l, mid, r);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};