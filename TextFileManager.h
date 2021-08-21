//
// Created by maxga on 20/08/2021.
//

#ifndef TAREA1_TEXTFILEMANAGER_H
#define TAREA1_TEXTFILEMANAGER_H
#include "fstream"
#include <iostream>

class TextFileManager {
public:

    TextFileManager(const std::string &fileName, int numberOfIntegers);

    const std::string &getFileName() const;

    void setFileName(const std::string &fileName);

    int getNumberOfIntegers() const;

    void setNumberOfIntegers(int numberOfIntegers);

    void createFile();

    int * readFile();

    void createResultFile();

public:
    std::string FileName;
    int numberOfIntegers;

};



#endif //TAREA1_TEXTFILEMANAGER_H
