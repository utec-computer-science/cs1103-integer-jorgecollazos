//
// Created by jorge on 10/04/20.
//

#include "Integer.h"

Integer::Integer() {
    this->value = 0;
}

Integer::Integer(int value){
    this->value = value;
}

Integer::Integer(const Integer& other){
    this->value = other.value;
}

Integer Integer::operator=(const Integer& other){
    return this->value = other.value;
}

Integer Integer::operator+(int value){
    return this->value + value;
}

Integer::operator int(){
    return this->value;
}

std::ostream& operator <<(std::ostream& os, const Integer& inte){
    os << inte.value;
    return os;
}

std::istream& operator >>(std::istream& os, Integer& inte){
    os >> inte.value;
    return os;
}

Integer Integer::operator^(int exp){
    auto tmp = this->value;
    if (exp == 0) return this->value = 0;
    for(int i = 1; i < exp; ++i)
        tmp *= this->value;
    return this->value = tmp;
}