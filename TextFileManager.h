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

    TextFileManager(const std::string &fileName, int numberOfIntegers);

    const std::string &getFileName() const;

    void setFileName(const std::string &fileName);

    int getNumberOfIntegers() const;

    void setNumberOfIntegers(int numberOfIntegers);

    void createFile();

    int * readFile();

    void createResultFile(int *);

public:
    std::string FileName;
    int numberOfIntegers;
    int myArray[1536];

};



#endif //TAREA1_TEXTFILEMANAGER_H
