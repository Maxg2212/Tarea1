//
// Created by maxga on 24/08/2021.
//

#ifndef TAREA1_PAGEDARRAY_H
#define TAREA1_PAGEDARRAY_H
#include "fstream"
#include <iostream>

class PagedArray {
    public:
        PagedArray(int *completeArray);
        int& operator[](int);

    public:
        int pageArray[6];
        int *completeArray;
};


#endif //TAREA1_PAGEDARRAY_H
