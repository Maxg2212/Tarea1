//
// Created by maxga on 17/08/2021.
//

#ifndef TAREA1_QUICKSORT_H
#define TAREA1_QUICKSORT_H
using namespace std;

/**
 * @file Quicksort.h
 * @author Max Garro Mora
 * @brief Clase que implementa el algoritmo Quicksort para ordenar integers de un array
 * @version 1.0
 * @date 19/08/2021
 */

class QuickSort {
    public:

    /**
     * @brief imprime los elemenos del array en consola
     * @param array arreglo que toma los elementos para ser impresos en consola
     * @param n int que representa el limite de hasta donde el metodo imprime los elementos del arreglo
     */
        static void printArray(int *, int );

    /**
     * @brief se encarga de ejecutar el algoritmo quicksort
     * @param array arreglo a ordenar
     * @param low int que representa la posicion baja de donde el algoritmo debe empezar a ordenar los elementos
     * @param high int que representa el limite de donde el algoritmo debe parar de ordenar los elementos enteros
     */
        static void quicksort(int *, int , int );

};


#endif //TAREA1_QUICKSORT_H
