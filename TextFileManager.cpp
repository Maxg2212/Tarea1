//
// Created by maxga on 20/08/2021.
//

#include "TextFileManager.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


TextFileManager::TextFileManager(const std::string &fileName, int numberOfIntegers) : FileName(fileName),
                                                                                  numberOfIntegers(numberOfIntegers) {
}

const std::string &TextFileManager::getFileName() const {
    return FileName;
}

void TextFileManager::setFileName(const std::string &fileName) {
    FileName = fileName;
}

int TextFileManager::getNumberOfIntegers() const {
    return numberOfIntegers;
}

void TextFileManager::setNumberOfIntegers(int numberOfIntegers) {
    TextFileManager::numberOfIntegers = numberOfIntegers;
}

void TextFileManager::createFile(){
    // Crea y abre el archivo
    ofstream File_TXT(FileName+".txt");

    for (int i = 0; i < numberOfIntegers; i++) {
        // Escribe el archivo
        int random = 1 + (rand() % 5001);
        File_TXT << to_string(random) + ",";
    }

    File_TXT.close();
}

int* TextFileManager::readFile(){

    //Almacena las líneas del archivo
    string textFromFile;

    //int myArray[1536];
    //Abre el archivo
    //ifstream readFromFile(FileName+".txt");

    /*
    //loop para leer el archivo
    while (getline(readFromFile,textFromFile)){
        cout<<textFromFile;

    }
     */
    //ifstream file(FileName+".txt");
    //if(file.is_open())
    //{


    //    for(int i = 0; i < numberOfIntegers; ++i)
    //    {
    //       file >> myArray[i];
    //    }
    //}

    //return myArray;
    ifstream infile;
    //int myArray[1536];
    int i=0;
    char cNum[10] ;
    infile.open ("Archivo_Enteros.txt", ifstream::in);
    if (infile.is_open())
    {
        while (infile.good())
        {
            infile.getline(cNum, 256, ',');
            myArray[i]= atoi(cNum) ;
            i++ ;
        }
        infile.close();
    }
    else
    {
    }
    for (int i = 1536 - 1; i >= 0; i--)
        cout << myArray[i] << endl;
    return myArray;
}
void TextFileManager::createResultFile() {

    ofstream resultFile("Archivo_Resultado.txt");

    resultFile <<"Números ordenados";

    resultFile.close();

}


