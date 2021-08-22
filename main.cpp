#include <iostream>
#include "QuickSort.h"
#include "TextFileManager.h"
#include "PageFaults.h"


int main()
{
    //TextFileManager
    TextFileManager file1 = TextFileManager("Archivo_Enteros", 1536);
    file1.createFile();
    cout << "File created" << endl;

    cout<<"Information from file:\n" << endl;
    file1.readFile();

    //PGA
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4,
                   2, 3, 0, 3, 2};
    int nm = sizeof(pages)/sizeof(pages[0]);
    int capacity = 4;
    PageFaults PRA = PageFaults(pages, nm, capacity);
    PRA.pageFaults();

    //QS
    int array[1536];
    copy(begin(file1.myArray), end(file1.myArray), begin(array));
    int n = sizeof(array)/sizeof(array[0]);

    std::cout << "Before Quick Sort :" << std::endl;
    QuickSort::printArray(array, n);

    QuickSort::quicksort(array, 0, n);

    std::cout << "After Quick Sort :" << std::endl;
    QuickSort::printArray(array, n);
    return (0);

}
