// LeetCode 238 - Product of Array Except Self
// Prefix + Suffix Product Approach
// Time: O(n)
// Space: O(1) extra space (excluding output array)

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int* answer = (int*)malloc(sizeof(int) * numsSize);

    
    answer[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    
    int rightProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] = answer[i] * rightProduct;
        rightProduct *= nums[i];
    }

    return answer;
}
