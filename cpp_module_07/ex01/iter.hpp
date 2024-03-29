#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(T *array, int length, void (*function)(T& array)){
    for (int i = 0; i < length; i++)
        function(array[i]);
}


template <typename T> void function(T& element){
    std::cout << element << std::endl;
}


#endif