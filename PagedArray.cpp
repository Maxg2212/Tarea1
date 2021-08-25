//
// Created by maxga on 24/08/2021.
//

#include "PagedArray.h"
#include "iostream"

using namespace std;

PagedArray::PagedArray(int *completeArray) : completeArray(completeArray) {

}

int& PagedArray::operator [] (int position){

    if(position == 0){
        cout << "Operator function" << endl;
        for(int i = 0; i < 256; i++){
            cout << to_string(i) + " " + to_string(completeArray[i]) << endl;
        }

        pageArray[0] = 1*256-1;
        cout << "Index in pageArray: "<< endl;
        cout << pageArray[0] << endl;

        return pageArray[0];

    }else if(position == 1){
        cout << "Operator function" << endl;
        for(int i = 256; i < 512; i++){
            cout << to_string(i) + " " + to_string(completeArray[i]) << endl;
        }

        pageArray[1] = 2*256-1;
        cout << "Index in pageArray: "<< endl;
        cout << pageArray[1] << endl;
        return pageArray[1];

    }else if(position == 2){
        cout << "Operator function" << endl;
        for(int i = 512; i < 768; i++){
            cout << to_string(i) + " " + to_string(completeArray[i]) << endl;
        }
        pageArray[2] = 3*256-1;
        cout << "Index in pageArray: "<< endl;
        cout << pageArray[2] << endl;
        return pageArray[2];

    }else if(position == 3){

        cout << "Operator function" << endl;
        for(int i = 768; i < 1024; i++){
            cout << to_string(i) + " " + to_string(completeArray[i]) << endl;
        }
        pageArray[3] = 4*256-1;
        cout << "Index in pageArray: "<< endl;
        cout << pageArray[3] << endl;
        return pageArray[3];

    }else if( position == 4){

        cout << "Operator function" << endl;
        for(int i = 1024; i < 1280; i++){
            cout << to_string(i) + " " + to_string(completeArray[i]) << endl;
        }
        pageArray[4] = 5*256-1;
        cout << "Index in pageArray: "<< endl;
        cout << pageArray[4] << endl;
        return pageArray[4];

    }else if(position == 5){
        cout << "Operator function" << endl;
        for(int i = 1280; i < 1536; i++){
            cout << to_string(i) + " " + to_string(completeArray[i]) << endl;
        }
        pageArray[5] = 6*256-1;
        cout << "Index in pageArray: "<< endl;
        cout << pageArray[5] << endl;
        return pageArray[5];
    }else{
        cout << "Index out of bounds" << endl;
    }
}