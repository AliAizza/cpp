/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:08:23 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/29 23:30:53 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
    throw(NumTooSmallException());
}

Span::Span(unsigned int N){
    if (N > 1)
    {
        this->N = N;
        v.reserve(N);
    }
    else
        throw(NumTooSmallException());
}

Span::~Span(){

}


Span::Span(const Span& s){
    *this = s;
}

Span& Span::operator=(const Span& s){
    this->N = s.N;
    this->v = s.v;
    return(*this);
}

void Span::addNumber(int num){
    if (v.size() < N)
        v.push_back(num);
    else
        throw(OverSizeException());
}

int Span::longestSpan(){
    return(*std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end()));
}

int Span::shortestSpan(){
    std::vector <int> vec = v;
    
    std::sort(vec.begin(), vec.end());
    int shortest;
    shortest = vec[1] - vec[0];
    if (v.size() == 2)
       return (shortest);
    int d;
    for (unsigned long i = 1; i < vec.size(); i++){
       d = vec[i] - vec[i - 1];
       if (shortest > d)
            shortest = d;
    }
    return (shortest);
}

void Span::addNumber(std::vector<int>::iterator x, std::vector<int>::iterator y){
    if (v.size() + std::distance(x, y) > N)
        throw(OverSizeException());
    v.insert(v.end(), x, y);
}