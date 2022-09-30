#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>


class Span{
    private:
        unsigned int N;
        std::vector <int> v;
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span& s);
        Span& operator=(const Span& s);
        void addNumber(int num);
        void addNumber(std::vector<int>::iterator x, std::vector<int>::iterator y);
        int shortestSpan();
        int longestSpan();
        class OverSizeException:public std::exception{
            const char * what() const throw(){
                return ("You passed the maximum size");
            }
        };
        class NumTooSmallException:public std::exception{
            const char * what() const throw(){
                return ("The Number is too small");
            }
        };
        class NumAlreadyExistsException:public std::exception{
            const char * what() const throw(){
                return ("Number already exists");
            }
        };
        class NoSpanFoundException:public std::exception{
            const char * what() const throw(){
                return ("No span can be found");
            }
        };
};





#endif