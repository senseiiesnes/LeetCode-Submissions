class Solution {
public:
    vector<int> moveZeroes(vector<int>& a) {
        int j=-1;
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                j=i;
                break;
            }
        }
        if(j!=-1){
            for(int i=j+1;i<a.size();i++){
                if(a[i]!=0){
                    swap(a[i],a[j]);
                    j++;
                }
            }
        }
        return a;
    }
};