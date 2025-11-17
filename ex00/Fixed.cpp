#include "Fixed.hpp"

Fixed::Fixed(): v(0){
    std::cout << "default constructor called" << std::endl;
};

Fixed::Fixed(const int val) : v(val) {
    std::cout << "param(int) contructor called" << std::endl;
};

Fixed::Fixed(const float val) : v(std::round(val * 256)){
    std::cout << "param(float) contructor called" << std::endl;
};

Fixed::Fixed(const Fixed& other) {
    std::cout << "copy contructor called" << std::endl;
    v = other.getRawBits();
};

Fixed::~Fixed(){
    std::cout << "destructor called" << std::endl;
};

Fixed& Fixed::operator=(const Fixed& c){
    std::cout << "assignement operator is called" << std::endl;
    if (this != &c)
        this->v = c.v;
    return *this;
};

void Fixed::setRawBits(int const raw){
    this->v = raw;
};

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return v;
};

float Fixed::toFloat(void) const{
    return (float)v / 256;
};

int Fixed::toInt(void) const{
    return v / 256;
};

std::ostream& operator<<(std::ostream& out, const Fixed& c){
    out << c.toFloat();
    return out;
};

