class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n=v.size(),el=0,cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el=v[i];
            }
            else if (v[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        // here it is given that there is a compulsary majority element so directly returning.
        // else need to iterate once for confirmation.
        return el;
    }
};