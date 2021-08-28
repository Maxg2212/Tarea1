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

    /**
     * @brief Constructor de la clase PagedArray
     * @param *completeArray arreglo que contiene las 6 paginas a ordenar
     */
        PagedArray(int *completeArray);

        /**
         * @brief metodo que se encarga de sobrecargar el operador [] y obtiene un interger
         * @param int n, se encarga de indicar de pagina a obtener
         * @return int, que representa el limite de la pagina escogida por el usuario
         */
        int& operator[](int);

    public:
        int pageArray[6];
        int *completeArray;
};


#endif //TAREA1_PAGEDARRAY_H
