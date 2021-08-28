//
// Created by maxga on 25/08/2021.
//

#ifndef TAREA1_PAGEALG_H
#define TAREA1_PAGEALG_H
/**
 * @file PagedArray.h
 * @author Max Garro Mora
 * @brief Clase que se encarga de cambiar la pagina y cada vez que eso pase, se le aplique el quicksort. Se detiene hasta llegar a la sexta pagina.
 * @version 1.0
 * @date 25/08/2021
 */

class PageAlg {
public:
    PageAlg(int *array, int index);

public:
    int *array;
    int index;


    void PageChange();
};


#endif //TAREA1_PAG