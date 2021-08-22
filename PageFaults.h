//
// Created by maxga on 21/08/2021.
//

#ifndef TAREA1_PAGEFAULTS_H
#define TAREA1_PAGEFAULTS_H


class PageFaults {
    public:
    PageFaults(int *array, int n, int capacity);


    public:
        int *array;
        int n;
        int capacity;

    int pageFaults();
};


#endif //TAREA1_PAGEFAULTS_H
