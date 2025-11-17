ex00 — Fixed (basic)

Summary
- Implement a `Fixed` class representing fixed-point numbers with 8 fractional bits.
- Provide constructors (default, int, float), copy constructor, destructor, assignment operator.
- Implement `toFloat()`, `toInt()`, `getRawBits()`, `setRawBits()` and `operator<<` for output.

What to learn
- Fixed-point representation (integer storage + fractional bits).
- Bit shifting for converting int <-> fixed raw value.
- Basic C++ class mechanics: constructors, copy, assignment, destructor.
- `const` correctness and method signatures.

What to implement (checklist)
- [ ] `Fixed.hpp` and `Fixed.cpp` files.
- [ ] Private: `int _raw` and `static const int _fbits = 8`.
- [ ] Constructors: `Fixed()`, `Fixed(int)`, `Fixed(float)`, copy ctor.
- [ ] Destructor and `operator=`.
- [ ] `int getRawBits() const`, `void setRawBits(int)`.
- [ ] `float toFloat() const`, `int toInt() const`.
- [ ] `std::ostream &operator<<(std::ostream&, const Fixed&)` printing `toFloat()`.
- [ ] Example `main.cpp` from the subject — do not modify it when testing.

What to be careful of
- Use `(1 << _fbits)` for scaling; avoid `pow`.
- When converting float -> raw, use `roundf()` to avoid truncation errors.
- Mark getters and conversion functions `const`.
- Compile with `-Wall -Wextra -Werror -std=c++98` (or project-specified standard) and fix all warnings.

Tests / verification
- Run the subject `main` for ex00 and match output exactly.
- Optionally run `valgrind` to catch leaks.

Notes
- Keep code small and clear; prefer converting to float for arithmetic in later exercises to avoid overflow.


31...,...9,8,7,6,5,4,3,2,1,0,Bit Index
\multicolumn{2}{,c,}{Integer Part},.,\multicolumn{8}{,c,}{Fractional Part},Conceptual,,,,
\multicolumn{2}{,c,}{×2N},\multicolumn{1}{,c,}{},×211​,×221​,×231​,…,×261​,×271​