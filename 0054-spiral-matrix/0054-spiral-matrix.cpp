class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        // vector<int> ans;
        // int m=matrix.size();
        // if(m==0) return ans;
        // int n=matrix[0].size();
        // int srow=0,scol=0,erow=m-1,ecol=n-1;
        // int count=0;
        // while(srow<=erow&&scol<=ecol){
        //     for(int i=scol;i<=ecol;i++){
        //         ans.push_back(matrix[srow][i]);
        //         count++;
        //     }
        //     srow++;
        //     if(count==m*n) return ans;
        //     for(int i=srow;i<=erow;i++){
        //         ans.push_back(matrix[i][ecol]);
        //         count++;
        //     }
        //     ecol--;
        //     if(count==m*n) return ans;
        //     for(int i=ecol;i>=scol;i--){
        //         ans.push_back(matrix[erow][i]);
        //         count++;
        //     }
        //     erow--;
        //     if(count==m*n) return ans;
        //     for(int i=erow;i>=srow;i--){
        //         ans.push_back(matrix[i][scol]);
        //         count++;
        //     }
        //     scol++;
        //     if(count==m*n) return ans;
        // }
        // return ans;
        int n=a.size();
        int m=a[0].size();
        int left=0, right=m-1;
        int top=0, bottom=n-1;
        vector<int> ans;

        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(a[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(a[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(a[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(a[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};