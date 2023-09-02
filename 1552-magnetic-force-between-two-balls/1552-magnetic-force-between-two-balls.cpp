class Solution {
public:
    bool canWePlace(vector<int> &stalls, int dist, int cows) {
        int n = stalls.size();
        int cntCows = 1;
        int last = stalls[0];
        for (int i = 1; i < n; i++) {
            if (stalls[i] - last >= dist) {
                cntCows++; 
                last = stalls[i];
            }
            if (cntCows >= cows) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());

        int low = 1, high = position[n - 1] - position[0];
        while (low <= high) {
            int mid = (low + high) / 2;
            if (canWePlace(position, mid, m) == true) {
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return high;
    }
};