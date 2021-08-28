//
// Created by maxga on 20/08/2021.
//

#ifndef TAREA1_TEXTFILEMANAGER_H
#define TAREA1_TEXTFILEMANAGER_H
#include "fstream"
#include <iostream>

/**
 * @file TextFileManager.h
 * @author Max Garro Mora
 * @brief Esta clase se encarga de leer el archivo de texto para pasarlos de string a intergers para ingresarlos a un array, y luego usar este mismo array ya ordenado para escribirlo en el archivo de texto.
 * @brief readFile(): para leer el archivo de texto, pasar los strings a intergers para asi poder emplear el quicksort.
 * @brief createResultFile(*array): para crear el archivo final, este metodo toma el array ya ordenado y lo escribe en el archivo final ya ordenado.
 * @version 1.0
 * @date 20/08/2021
 */


class TextFileManager {
public:

    /**
     * @brief Constructor de clase FileManager
     * @param fileName Nombre de archivo
     * @param numberOfIntegers Numero de intergers en el archivo de texto
     */

    TextFileManager(const std::string &fileName, int numberOfIntegers);

    const std::string &getFileName() const;

    void setFileName(const std::string &fileName);

    int getNumberOfIntegers() const;

    void setNumberOfIntegers(int numberOfIntegers);

    /**
     * @brief Metodo que se encarga de crear un archivo de texto lleno de 1536 enteros.
     */

    void createFile();

    /**
     * @brief  Metodo que se encarga de leer un archivo de texto.
     */

    int * readFile();

    /**
     * @brief Metodo que se encarga de crear el archivo resultado, con los numeros enteros ordenados.
     * @param int *array arreglo que se retorna despues de hacer todo el proceso de ordenamiento.
     */

    void createResultFile(int *);

public:
    std::string FileName;
    int numberOfIntegers;
    int myArray[1536];

};



#endif //TAREA1_TEXTFILEMANAGER_H
