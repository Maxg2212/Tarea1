//
// Created by maxga on 24/08/2021.
//

#ifndef TAREA1_PAGEDARRAY_H
#define TAREA1_PAGEDARRAY_H
#include "fstream"
#include <iostream>

/**
 * @file PagedArray.h
 * @author Max Garro Mora
 * @brief Clase en la que se hace la sobrecarga del operador [], y lo que basicamente hace es retornar los limites de cada pagina debido a que al limite inferior de cada pagina se le suma 256 enteros, para asi llegar a la siguiente pagina así hasta llegar a la sexta pagina.
 * @version 1.0
 * @date 24/08/2021
 */

class PagedArray {
    public:
        PagedArray(int *completeArray);
        int& operator[](int);

    public:
        int pageArray[6];
        int *completeArray;
};


#endif //TAREA1_PAGEDARRAY_H
