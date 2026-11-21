void moveZeroes(int* nums, int numsSize) {
    int pos = 0, i, t;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            t = nums[pos];
            nums[pos] = nums[i];
            nums[i] = t;
            pos++;
        }
    }
}
