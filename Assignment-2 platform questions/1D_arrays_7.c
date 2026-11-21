int findNumbers(int* nums, int numsSize) {
    int count = 0, i, d, t;
    for (i = 0; i < numsSize; i++) {
        d = 0;
        t = nums[i];
        while (t > 0) {
            d++;
            t /= 10;
        }
        if (d % 2 == 0) count++;
    }
    return count;
}
