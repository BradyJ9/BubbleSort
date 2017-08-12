//
//  BubbleSort.cpp
//  Bubble Sort
//
//  Created by Brady Bess on 6/24/17.
//  Copyright © 2017 Brady Bess. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <array>
#include "BubbleSort.h"

void BubbleSort::sort(int arr[], int sizeOfArray) {
    bool madeSwap = false;

    for (unsigned int i = 0; i < sizeOfArray - 1; ++i) {
        for (unsigned int j = 0; j < sizeOfArray - 1 - i; ++j) {
            
            if (arr[j] > arr[j + 1]) {
                swap(arr, j, j + 1);
                madeSwap = true;
            }
            
        }
        if (!madeSwap) {
            break;
        }
        madeSwap = false;
    }
    
}

void BubbleSort::swap(int arr[], int index1, int index2) {
    
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
    
    
}

void BubbleSort::print(int arr[], int sizeOfArray) {
    for (unsigned int i = 0; i < sizeOfArray; ++i) {
        std::cout << arr[i] << " ";
    }
}
