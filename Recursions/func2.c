#include <stdio.h>

int minIndex(int arr[], int s, int e)
{
    int sml = __INT32_MAX__;
    int mindex;

    for (int i = s; i < e; i++)
    {
        if (sml > arr[i])
        {
            sml = arr[i];
            mindex = i;
        }
    }
    return mindex;
}

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void func2(int arr[], int start_index, int end_index)
{
    if (start_index >= end_index)
    {
        return;
    }
    int min_index;
    int temp;

    min_index = minIndex(arr, start_index, end_index);

    swap(arr[start_index], arr[min_index]);

    func2(arr, start_index + 1, end_index);
}

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, -6, 7, 8, 1, 0};
    int sIndex = 0, eIndex = 10;
    printf("%d \n", minIndex(arr, sIndex, eIndex));
}