class Solution {
public:
    int findNumbers(vector<int>& nums) {
    // Function to count the number of integers with an even number of digits
    int count = 0;
    for (int num : nums) {
        int digits = 0;
        int temp = num;
        while (temp != 0) {
            temp /= 10; // Remove the last digit
            digits++;
        }
        if (digits % 2 == 0) {
            count++;
        }
    }
    return count;
}
};
