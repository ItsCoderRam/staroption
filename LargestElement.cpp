#include <iostream>
using namespace std;

int FindMaxRec(int A[], int n)
{
    if (n == 1)
        return A[0];
    return max(A[n - 1], FindMaxRec(A, n - 1));
}

int main()
{
    int A[] = {6, 46, 99, 6, -10, 10, 20};
    int n = sizeof(A) / sizeof(A[0]);
    cout << FindMaxRec(A, n);
    return 0;
}