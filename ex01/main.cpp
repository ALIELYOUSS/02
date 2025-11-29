#include "Fixed.hpp"

int main(void) {
    
    Fixed a(10);
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << c.toFloat() << std::endl;
    std::cout << a.toInt() << std::endl;
    std::cout << a << std::endl;
    return 0;
}