class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = std::numeric_limits<int>::max();
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int temp=0;
            while(n>0){
                temp=temp+n%10;
                n/=10;
            }
            nums[i]=temp;
            if(min>nums[i]){
                min=nums[i];
            }
        }
        return min;
    }
};
