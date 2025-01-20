class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        // Store the original number
        int original = x;
        int reversed = 0;

        // Reverse the number
        while (x != 0) {
            int digit = x % 10;
            // Handle potential overflow for large integers
            if (reversed > (INT_MAX - digit) / 10) {
                return false;
            }
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        // Check if the original number and the reversed number are the same
        return original == reversed;
    }
};
