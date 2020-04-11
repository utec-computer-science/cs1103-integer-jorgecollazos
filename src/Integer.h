//
// Created by jorge on 10/04/20.
//

#ifndef CS1103_INTEGER_JORGECOLLAZOS_INTEGER_H
#define CS1103_INTEGER_JORGECOLLAZOS_INTEGER_H


class Integer {
private:
    int value;
public:
    Integer();
    Integer(int value);
    Integer(const Integer& other);
    Integer operator=(const Integer& other);
    Integer operator+(int value);
    operator int();
    friend std::ostream& operator <<(std::ostream& os, const Integer&);
    friend std::istream& operator >>(std::istream& os, Integer&);
    Integer operator^(int exp);
};

#endif //CS1103_INTEGER_JORGECOLLAZOS_INTEGER_H
