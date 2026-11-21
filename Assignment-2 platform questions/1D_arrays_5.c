int searchInsert(int* nums, int numsSize, int target) {
    int lo = 0, hi = numsSize - 1, mid;
    while (lo <= hi) {
        mid = lo + (hi - lo) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return lo;
}
