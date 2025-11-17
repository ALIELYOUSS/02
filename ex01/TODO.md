ex01 — Fixed (comparison, min/max, inc/dec)

Summary
- Extend `Fixed` from ex00 with comparison operators, `min`/`max` static functions, and pre/post increment/decrement operators.

What to learn
- Operator overloading for comparisons and arithmetic.
- Difference between pre- and post-increment semantics in C++.
- Overloading `min`/`max` as static methods (both const and non-const overloads).

What to implement (checklist)
- [ ] Implement comparison operators: `>`, `<`, `>=`, `<=`, `==`, `!=`.
- [ ] Static methods: `static Fixed &min(Fixed &a, Fixed &b)`, `static const Fixed &min(const Fixed &a, const Fixed &b)`, and `max` equivalents.
- [ ] Increment/decrement operators: pre/post `++`, `--`.
- [ ] Ensure these operators work with const and non-const objects as expected.

What to be careful of
- Pre-increment should modify and return `Fixed&`; post-increment returns a copy (old value).
- For `min`/`max`, provide both const and non-const overloads.
- When comparing, compare raw integer representation `_raw` directly (faster and exact).
- Keep `const` correctness: comparisons and const overloads should be `const` methods.

Tests / verification
- Use the subject `main.cpp` for ex01 and compare output precisely.
- Add unit checks: comparisons consistent with `toFloat()` values.

Notes
- Keep operators thin: prefer delegating to raw `_raw` comparisons to avoid float precision issues.
