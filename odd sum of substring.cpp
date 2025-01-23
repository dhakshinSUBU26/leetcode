class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();/* declaring the size and totalsum as 0*/
        int totalsum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){/* to get the substring of array*/
                int length= j-i+1;
                if(length%2==1){  /* logic to check the substring length is odd*/
                    int subarraySum = 0;
                for (int k = i; k <= j; k++) {
                    subarraySum += arr[k];
                }
                totalsum += subarraySum;
                }
            }
        }
    return totalsum;
    }
};
