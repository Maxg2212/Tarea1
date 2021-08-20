//
// Created by maxga on 17/08/2021.
//

#include <iostream>
using namespace std;
#include "QuickSort.h"

void QuickSort::printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << array[i] << std::endl;
}

void QuickSort::quicksort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quicksort(array, low, j);
    if (i < high)
        quicksort(array, i, high);
}





