#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array{
    private:
        T *arr;
        unsigned int len;
    public:
        Array(){
            len = 0;
            arr = new T;
        }
        Array(unsigned int n){
            len = n;
            arr = new T[n];
        }
        ~Array(){
            delete[] arr;
        }
        Array(const Array& a){
            this->len = a.len;
            this->arr = new T[len];
            for (int i = 0; i < len; i++)
                arr[i] = a.arr[i];
        }
        Array& operator=(const Array& a){
            delete[] arr;
            this->len = a.len;
            this->arr = new T[len];
            for (int i = 0; i < len; i++)
                arr[i] = a.arr[i];
            return(*this);
        }
        T& operator[](unsigned int index){
            if (index < len)
                return (arr[index]);
            else
                throw(IndexNotValidException());
        }
        class IndexNotValidException : public std::exception{
            const char * what() const throw(){
                return ("invalid index");
            }
        };
        unsigned int size(){
            return (len);
        }
};

#endif