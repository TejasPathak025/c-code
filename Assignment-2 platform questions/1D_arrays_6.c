int cmp(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

bool containsDuplicate(int* nums, int numsSize) {
    int i;
    qsort(nums, numsSize, sizeof(int), cmp);
    for (i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) return true;
    }
    return false;
}
