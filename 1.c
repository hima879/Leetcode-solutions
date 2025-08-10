#include <stdlib.h>

// Function to find two indices in the array such that nums[i] + nums[j] == target
// Parameters:
// nums: The input array
// numsSize: Size of the array
// target: The target sum
// returnSize: Pointer to an integer where we store the size of the result array (always 2 if pair is found)
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for the result array of 2 integers
    int* result = (int*)malloc(2 * sizeof(int));

    // Traverse each element in the array
    for (int i = 0; i < numsSize; i++) {
        // For each element nums[i], check every element after it
        for (int j = i + 1; j < numsSize; j++) {
            // If the pair sums up to the target
            if (nums[i] + nums[j] == target) {
                result[0] = i;  // Store index of first number
                result[1] = j;  // Store index of second number
                *returnSize = 2;  // Set return size to 2 as we found a pair
                return result;  // Return the result array
            }
        }
    }

    // If no pair is found, set returnSize to 0 and return NULL
    *returnSize = 0;
    free(result);  // Free allocated memory to avoid memory leak
    return NULL;
}
