// LeetCode 303 - Range Sum Query (Immutable)
// Prefix Sum Approach
// Time: O(n) preprocessing, O(1) per query
// Space: O(n)

typedef struct {
    int *prefix;
    int size;
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray* obj = (NumArray*)malloc(sizeof(NumArray));
    obj->size = numsSize;
    obj->prefix = (int*)malloc(sizeof(int) * numsSize);

    obj->prefix[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        obj->prefix[i] = obj->prefix[i - 1] + nums[i];
    }

    return obj;
}


int numArraySumRange(NumArray* obj, int left, int right) {
    if (left == 0)
        return obj->prefix[right];
    return obj->prefix[right] - obj->prefix[left - 1];
}


void numArrayFree(NumArray* obj) {
    free(obj->prefix);
    free(obj);
}
