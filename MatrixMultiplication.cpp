#include <stdio.h>
 using namespace std;
const int MAX = 100;

void MultiplyMatrixRec(int row1, int col1, int A[][MAX],
                       int row2, int col2, int B[][MAX],
                       int C[][MAX])
{
    static int i = 0, j = 0, k = 0;

    // If all rows traversed.
    if (i >= row1)
        return;

    // If i < row1
    if (j < col2)
    {
        if (k < col1)
        {
            C[i][j] += A[i][k] * B[k][j];
            k++;

            MultiplyMatrixRec(row1, col1, A, row2, col2,
                              B, C);
        }

        k = 0;
        j++;
        MultiplyMatrixRec(row1, col1, A, row2, col2, B, C);
    }

    j = 0;
    i++;
    MultiplyMatrixRec(row1, col1, A, row2, col2, B, C);
}

// Function to multiply two matrices A[][] and B[][]
void MultiplyMatrix(int row1, int col1, int A[][MAX],
                    int row2, int col2, int B[][MAX])
{
    if (row2 != col1)
    {
        printf("Not Possible\n");
        return;
    }

    int C[MAX][MAX] = {0};

    MultiplyMatrixRec(row1, col1, A, row2, col2, B, C);

    // Print the result
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
            printf("%d  ", C[i][j]);

        printf("\n");
    }
}

// Driven Program
int main()
{
    int A[][MAX] = {{2, 0, 1},
                    {4, 3, 6},
                    {7, 8, 9}};

    int B[][MAX] = {{1, 9, 3},
                    {4, 0, 6},
                    {7, 3, 1}};

    int row1 = 3, col1 = 3, row2 = 3, col2 = 3;
    MultiplyMatrix(row1, col1, A, row2, col2, B);

    return 0;
}