#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int v;
    static const int fbits = 8;
public:
    Fixed();
    Fixed(int val);
    Fixed(const float val);
    Fixed(const Fixed& other);
    ~Fixed();
    
    Fixed&  operator=(const Fixed& c);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    
};
std::ostream&    operator<<(std::ostream& out, const Fixed& c);

#endif