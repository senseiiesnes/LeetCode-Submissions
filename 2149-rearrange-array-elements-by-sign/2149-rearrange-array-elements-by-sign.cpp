class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        // int pi=0,ni=0;
        // int n=a.size();
        // vector<int> pos,neg;
        // for(int i=0;i<n;i++){
        //     if(a[i]<0){
        //         neg.push_back(a[i]);
        //     }else{
        //         pos.push_back(a[i]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(i%2==0){
        //         a[i]=pos[pi];
        //         pi++;
        //     }
        //     else{
        //         a[i]=neg[ni];
        //         ni++;
        //     }
        // }
        // return a;
        int pi=0,ni=1;
        int n=a.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            if(a[i]>0){
                ans[pi]=a[i];
                pi+=2;
            }
            else{
                ans[ni]=a[i];
                ni+=2;
            }
        }
        return ans;
    }
};