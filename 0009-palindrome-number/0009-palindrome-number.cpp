class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int org = x;
        long long rev = 0;
        while(org){
            int rem = org%10;
            rev = rev * 10 + rem;
            org /= 10;
        }
        return x==rev;
    }
};