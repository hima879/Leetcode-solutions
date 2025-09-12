class Solution {

    // Helper method to check if a given string is a palindrome
    private static boolean checkPalindrome(String num){
        int left = 0;                      // Pointer starting from the beginning of the string
        int right = num.length() - 1;      // Pointer starting from the end of the string

        // Compare characters from both ends moving towards the center
        while(left < right){
            // If characters at left and right pointers don't match, it's not a palindrome
            if(num.charAt(left) != num.charAt(right)){
                return false;              // Early return if mismatch found
            }
            left++;                        // Move left pointer one step to the right
            right--;                       // Move right pointer one step to the left
        }

        return true;                       // All characters matched, so it's a palindrome
    }

    // Main method to check if an integer is a palindrome
    public boolean isPalindrome(int x) {
        // Negative numbers cannot be palindromes because of the minus sign (e.g., -121 != 121-)
        if (x < 0){
            return false;                  // Immediately return false for negatives
        }

        // Convert integer into string to allow character-based comparison
        String num =
