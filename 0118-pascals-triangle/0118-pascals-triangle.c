/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    // number of rows
    *returnSize = numRows;

    // allocate memory for column sizes
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    // allocate memory for triangle (array of int pointers)
    int** triangle = (int**)malloc(numRows * sizeof(int*));

    for (int i = 0; i < numRows; i++) {
        // each row has i+1 elements
        (*returnColumnSizes)[i] = i + 1;
        triangle[i] = (int*)malloc((i + 1) * sizeof(int));

        // first element
        triangle[i][0] = 1;

        // middle elements
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        // last element
        triangle[i][i] = 1;
    }

    return triangle;
}
