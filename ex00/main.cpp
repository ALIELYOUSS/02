#include "Fixed.hpp"

int main(void) {
    
    Fixed a(12.053f);
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout <<  a << std::endl;
    return 0;
}