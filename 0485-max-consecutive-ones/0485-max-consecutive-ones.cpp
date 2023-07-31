class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int max1=0,count=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==1){
                count++;
                max1=max(count,max1);
            }else{
                count=0;
            }
        }
        return max1;
    }
};