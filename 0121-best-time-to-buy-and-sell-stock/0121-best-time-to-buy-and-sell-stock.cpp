class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=INT_MAX;
        int profit=0;
        for(int i=0;i<p.size();i++){
            mini=min(p[i],mini);
            profit=max(profit,p[i]-mini);
        }
        return profit;
    }
};