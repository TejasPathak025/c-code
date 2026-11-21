bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int n = matrixColSize[0];
    int lo = 0, hi = matrixSize * n - 1, mid, v;
    while (lo <= hi) {
        mid = lo + (hi - lo) / 2;
        v = matrix[mid / n][mid % n];
        if (v == target) return true;
        if (v < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return false;
}
