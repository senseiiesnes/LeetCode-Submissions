class Solution {
public:
    int checkSum(vector<int> &arr, int pages){
        int sub = 1;
        long long summ = 0;
        for(int i=0; i<arr.size(); i++){
            if(summ + arr[i] <= pages) summ += arr[i];
            else{
                sub += 1;
                summ = arr[i];
            } 
        }
        return sub;
    }
    
    int splitArray(vector<int>& a, int k) {
        int n = a.size();
        if(k>n) return -1;
        int low = *max_element(a.begin(), a.end());
        int high = accumulate(a.begin(), a.end(), 0);
        while(low <= high){
            int mid = (low + high) /2;
            int subs = checkSum(a,mid);
            if(subs>k) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};