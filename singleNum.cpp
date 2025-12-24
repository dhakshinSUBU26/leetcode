class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int rel=0;
        for(int num : nums){
            rel ^= num;
        }
        return rel;
    }
};
