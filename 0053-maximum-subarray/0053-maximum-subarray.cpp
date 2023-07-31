class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum=0,maxi=INT_MIN,n=a.size();
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};