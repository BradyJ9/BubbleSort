//
//  main.cpp
//  Bubble Sort
//
//  Created by Brady Bess on 6/24/17.
//  Copyright © 2017 Brady Bess. All rights reserved.
//

#include <iostream>
#include "BubbleSort.h"

using namespace std;

int main() {
    
    BubbleSort instance;
    int arraySize = 20;
    int array[20] = {6, 4, 8, 2, 9, 11, 18, 203, 54, 83, 122, 58, 99, 23, 5, 89, 44, 33, 20, 188};
    
    instance.sort(array, arraySize);
    instance.print(array, arraySize);
    
    cout << "From Main" << endl;
    for (unsigned int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
        
    }
    
    
    
    
}
