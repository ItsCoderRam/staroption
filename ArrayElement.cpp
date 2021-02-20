#include <iostream>
using namespace std;

void Print_Array(int arr[], int size, int i)
{
    if (i == size)
    {
        cout << endl;
        return;
    }
    cout << arr[i] << " ";
    i++;
    Print_Array(arr, size, i);
}
int main()
{

    int arr[] = {100,565,99,76,199};
    int n = sizeof(arr) / sizeof(arr[0]);

    Print_Array(arr, n, 0);

    return 0;
}