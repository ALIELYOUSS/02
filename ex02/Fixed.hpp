#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
public:
    Fixed();
    Fixed(int val);
    Fixed(float val);
    Fixed(const Fixed& other);
    ~Fixed();
    
    Fixed&  operator=(const Fixed& c);
    bool    operator>(const Fixed& c) const;
    bool    operator<(const Fixed& c) const;
    bool    operator>=(const Fixed& c) const;
    bool    operator<=(const Fixed& c) const;
    bool    operator==(const Fixed& c) const;
    bool    operator!=(const Fixed& c) const;
    Fixed   operator+(const Fixed& c) const;
    Fixed   operator-(const Fixed& c) const;
    Fixed   operator*(const Fixed& c) const;
    Fixed   operator/(const Fixed& c) const;
    Fixed&  operator++();
    Fixed&  operator--();
    Fixed   operator++(int);
    Fixed   operator--(int);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    
};
std::ostream&    operator<<(std::ostream& out, const Fixed& c);

#endif