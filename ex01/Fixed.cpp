#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) : _fixedPointValue(val << _fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val) : _fixedPointValue(roundf(val * (1 << _fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& c) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &c)
        this->_fixedPointValue = c.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return _fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
    return (float)_fixedPointValue / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _fixedPointValue >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& c) {
    out << c.toFloat();
    return out;
}

