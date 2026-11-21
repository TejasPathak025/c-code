void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int m = matrixSize, n = matrixColSize[0], i, j;
    int firstRow = 0, firstCol = 0;
    for (j = 0; j < n; j++) if (matrix[0][j] == 0) firstRow = 1;
    for (i = 0; i < m; i++) if (matrix[i][0] == 0) firstCol = 1;
    for (i = 1; i < m; i++) {
        for (j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    for (i = 1; i < m; i++) {
        for (j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
        }
    }
    if (firstRow) for (j = 0; j < n; j++) matrix[0][j] = 0;
    if (firstCol) for (i = 0; i < m; i++) matrix[i][0] = 0;
}
