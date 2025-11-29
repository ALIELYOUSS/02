#include "Fixed.hpp"

Fixed::Fixed(): _fixedPointValue(0){
    std::cout << "default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& other) {
    std::cout << "copy constructor called" << std::endl;
    _fixedPointValue = other._fixedPointValue;
};

Fixed::~Fixed(){
    std::cout << "destructor called" << std::endl;
};

Fixed& Fixed::operator=(const Fixed& c){
    std::cout << "assignation operator called" << std::endl;
    if (this != &c)
        this->_fixedPointValue = c._fixedPointValue;
    return *this;
};

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits method called" << std::endl;
    this->_fixedPointValue = raw;
};

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits method called" << std::endl;
    return _fixedPointValue;
};
