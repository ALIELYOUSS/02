#include "Fixed.hpp"

Fixed::Fixed(): _fixedPointValue(0){
    std::cout << "default constructor called" << std::endl;
};

Fixed::Fixed(const int val) : _fixedPointValue(val << _fractionalBits) {
    std::cout << "param(int) contructor called" << std::endl;
};

Fixed::Fixed(const float val) : _fixedPointValue(std::round(val * 256)){
    std::cout << "param(float) contructor called" << std::endl;
};

Fixed::Fixed(const Fixed& other) {
    std::cout << "copy contructor called" << std::endl;
    _fixedPointValue = other._fixedPointValue;
};

Fixed::~Fixed(){
    std::cout << "destructor called" << std::endl;
};

Fixed& Fixed::operator=(const Fixed& c){
    std::cout << "assignement operator is called" << std::endl;
    if (this != &c)
        this->_fixedPointValue = c._fixedPointValue;
    return *this;
};

void Fixed::setRawBits(int const raw){
    this->_fixedPointValue = raw;
};

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
};

float Fixed::toFloat(void) const{
    return (float)_fixedPointValue / 256;
};

int Fixed::toInt(void) const{
    return _fixedPointValue / 256;
};

std::ostream& operator<<(std::ostream& out, const Fixed& c){
    out << c.toInt();
    return out;
};

