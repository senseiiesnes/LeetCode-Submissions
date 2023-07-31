class Solution {
public:
    // int First(vector<int>& nums, int target){
    //     int s=0;
    //     int e=nums.size()-1;
    //     int ans=-1;
    //     int mid=0;
    //     while(s<=e){
    //         mid=(s+e)/2;
    //         if(nums[mid]==target){
    //             ans=mid;
    //             e=mid-1;
    //         }
    //         else if(nums[mid]>target){
    //             e=mid-1;
    //         }
    //         else{
    //             s=mid+1;
    //         }
    //     }
    //     return ans;
    // }
    // int Last(vector<int>& nums, int target){
    //     int s=0;
    //     int e=nums.size()-1;
    //     int ans=-1;
    //     int mid=0;
    //     while(s<=e){
    //         mid=(s+e)/2;
    //         if(nums[mid]==target){
    //             ans=mid;
    //             s=mid+1;
    //         }
    //         else if(nums[mid]>target){
    //             e=mid-1;
    //         }
    //         else{
    //             s=mid+1;
    //         }
    //     }
    //     return ans;
    // }

    int Index(vector<int>& nums, int target, bool First){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        int mid=0;
        while(s<=e){
            mid=(s+e)/2;
            if(nums[mid]==target){
                ans=mid;
                if(First)
                    e=mid-1;
                else
                    s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2,-1);
        if(Index(nums,target,1)==-1){
            return v;
        }
        v[0]=Index(nums,target,1);
        v[1]=Index(nums,target,0);
        return v;
    }
};