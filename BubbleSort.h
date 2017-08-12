//
//  BubbleSort.h
//  Bubble Sort
//
//  Created by Brady Bess on 6/24/17.
//  Copyright © 2017 Brady Bess. All rights reserved.
//

#ifndef BubbleSort_h
#define BubbleSort_h

class BubbleSort {
private:
    int* toArray;
public:
    void sort(int arr[], int sizeOfArray);
    void swap(int arr[], int index1, int index2);
    void print(int arr[], int sizeOfArray);
};


#endif /* BubbleSort_h */
