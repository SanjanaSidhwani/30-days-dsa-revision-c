#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    
    // Calculate left products and store in result array
    result[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i - 1] * nums[i - 1];
    }
    
    // Calculate right products and multiply with left products
    int rightProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }
    
    return result;
}

// Helper function to print array
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    // Test case 1
    int nums1[] = {1, 2, 3, 4};
    int returnSize1;
    int* result1 = productExceptSelf(nums1, 4, &returnSize1);
    printf("Input: [1, 2, 3, 4]\nOutput: ");
    printArray(result1, returnSize1);
    free(result1);
    
    // Test case 2
    int nums2[] = {-1, 1, 0, -3, 3};
    int returnSize2;
    int* result2 = productExceptSelf(nums2, 5, &returnSize2);
    printf("\nInput: [-1, 1, 0, -3, 3]\nOutput: ");
    printArray(result2, returnSize2);
    free(result2);
    
    return 0;
}
