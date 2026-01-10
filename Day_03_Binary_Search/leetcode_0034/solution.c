// LeetCode 34 - Find First and Last Position of Element
// Time: O(log n), Space: O(1)

int findLeft(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1, ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] >= target) {
            if (nums[mid] == target) ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int findRight(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1, ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= target) {
            if (nums[mid] == target) ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(sizeof(int) * 2);

    result[0] = findLeft(nums, numsSize, target);
    result[1] = findRight(nums, numsSize, target);

    return result;
}
