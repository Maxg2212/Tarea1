//
// Created by maxga on 25/08/2021.
//

#include "PageAlg.h"
#include "PagedArray.h"
#include "iostream"
#include "QuickSort.h"
using namespace std;

PageAlg::PageAlg(int *array, int index):array(array), index(index) {}

void PageAlg::PageChange(){
    PagedArray PA = PagedArray(array);
    QuickSort QS = QuickSort();
    for(int i = 0; i < 6; i++){
        int n = PA[i];
        if(i == 0){
            QS.quicksort(array, 0, n);
            QS.printArray(array, n);
            cout << "pagina numero" + to_string(i) << endl;
        }
        else
        {
            QS.quicksort(array, n-256, n); //Se le resta 256 para llegar al limite inferior de cada pagina y el n es el limite superior de cada pagina
            QS.printArray(array, n);
            cout << "pagina numero" + to_string(i) << endl;

        }
    }

}
