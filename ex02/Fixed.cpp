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
    std::cout << "hii toFloat()"<<std::endl;
    return (_fixedPointValue / (1 << _fractionalBits));
}

int Fixed::toInt(void) const {
    return _fixedPointValue >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& c) {
    out << c.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed& c) const{
    return (_fixedPointValue > c._fixedPointValue);
};

bool Fixed::operator<(const Fixed& c)const{
    return (_fixedPointValue < c._fixedPointValue);
};

Fixed Fixed::operator+(const Fixed& c) const {
    Fixed res;
    res.setRawBits(_fixedPointValue + c._fixedPointValue);
    return res;
};

Fixed Fixed::operator-(const Fixed& c) const {
    Fixed res;
    res.setRawBits(_fixedPointValue - c._fixedPointValue);
    return res;
};

Fixed Fixed::operator/(const Fixed& c) const {
    Fixed res;
    res.setRawBits(((_fixedPointValue << _fractionalBits) / c._fixedPointValue));
    return res;
};

Fixed Fixed::operator*(const Fixed& c) const {
    Fixed res;
    long tmp = (_fixedPointValue) * (c._fixedPointValue);
    res.setRawBits(tmp >> _fractionalBits);
    return res;
};

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    ++_fixedPointValue;
    return tmp;
};

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    --_fixedPointValue;
    return tmp;
};

Fixed& Fixed::operator++() {
    ++_fixedPointValue;
    return *this;
};

Fixed&   Fixed::operator--(){
    --_fixedPointValue;
    return *this;
};

bool    Fixed::operator>=(const Fixed& c) const{
    return _fixedPointValue >= c._fixedPointValue;
};

bool    Fixed::operator<=(const Fixed& c) const{
    return _fixedPointValue <= c._fixedPointValue;
};

bool    Fixed::operator==(const Fixed& c) const{
    return _fixedPointValue == c._fixedPointValue;
};

bool    Fixed::operator!=(const Fixed& c) const{
    return _fixedPointValue != c._fixedPointValue;
};
