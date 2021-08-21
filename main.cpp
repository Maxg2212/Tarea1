#include <iostream>
#include "QuickSort.h"


int main()
{
    int array[] = {95, 45, 48, 98, 1, 485, 65, 478, 1, 2325};
    int n = sizeof(array)/sizeof(array[0]);

    std::cout << "Before Quick Sort :" << std::endl;
    QuickSort::printArray(array, n);

    QuickSort::quicksort(array, 0, n);

    std::cout << "After Quick Sort :" << std::endl;
    QuickSort::printArray(array, n);
    return (0);
}
