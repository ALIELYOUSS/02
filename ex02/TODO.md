ex02 — Fixed (arithmetic)

Summary
- Add arithmetic operator overloads (+, -, *, /) to the `Fixed` class. Ensure correct behavior and precision.

What to learn
- Overloading arithmetic operators as non-member or member functions.
- Numeric precision trade-offs when implementing fixed-point multiplication/division.
- When to convert to `float` vs. doing integer math on raw bits.

What to implement (checklist)
- [ ] Overload: `Fixed operator+(const Fixed& other) const`, `-`, `*`, `/`.
- [ ] Ensure these return new `Fixed` objects with correct value.
- [ ] Decide strategy: convert operands to `float` for calculation, or implement integer-only ops carefully (handle shifting and rounding).
- [ ] Update tests/main to verify results and precision.

What to be careful of
- Integer-only multiplication: `(long)_raw * other._raw) >> _fbits` — watch for overflow, use 64-bit intermediate if required.
- Division: shift numerator before dividing to preserve fractional bits: `( (_raw << _fbits) / other._raw )` using 64-bit intermediate.
- Simpler alternative allowed in subject: convert to `float`, do arithmetic, build new `Fixed` from float — easier and safe for the small exercises.
- Handle division by zero gracefully (subject usually doesn't test it, but avoid UB).

Tests / verification
- Run the subject `main` for ex02; verify printed values match expected.
- Add tests for edge values and repeated operations to see cumulative rounding.

Notes
- If implementing integer-only ops, use `int64_t` for intermediates to prevent overflow on 32-bit `int`.
