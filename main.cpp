#include <iostream>
#include "QuickSort.h"
#include "TextFileManager.h"
#include "PageAlg.h"


int main()
{
    //TextFileManager
    TextFileManager file1 = TextFileManager("Archivo_Enteros", 1536);
    cout << "File created" << endl;

    cout<<"Information from file:\n" << endl;
    file1.readFile();

    //QS
    int array[1536];
    copy(begin(file1.myArray), end(file1.myArray), begin(array));
    int n = sizeof(array)/sizeof(array[0]);

    std::cout << "Before Quick Sort :" << std::endl;
    QuickSort::printArray(array, n);

    //PageAlg
    PageAlg PAL = PageAlg(array, 0);
    PAL.PageChange();

    //QuickSort::quicksort(array, 0, n);

    //std::cout << "After Quick Sort :" << std::endl;
    //QuickSort::printArray(array, n);

    //Crear archivo final
    TextFileManager finalfile = TextFileManager("Archivo-Resultado", 1536);
    finalfile.createResultFile(array);

    return (0);

}
