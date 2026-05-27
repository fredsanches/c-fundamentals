# Exercise: Sensor Sample With `struct` and `enum`

## Concept Focus

- `struct`
- `enum`
- fixed-width integer types
- grouping related data
- passing structs to functions
- embedded-style status modeling

## Objective

Model a tiny sensor sample record using a `struct` and an `enum`.

This is the bridge after safe string/buffer exercises. Do this only after you are comfortable with the string boundary work.

Suggested ingredients:

- an enum for sample status, such as OK, warning, or fault
- a struct containing a raw ADC count, millivolts, and status
- a function that prints or classifies one sample

You must decide and type the enum definition, struct definition, function declarations, function definitions, parameter lists, return types, and local variables yourself.

## Constraints

- Use `<stdint.h>` for fixed-width integer fields.
- Keep the exercise in one `.c` file.
- Do not use dynamic allocation.
- Keep functions small.
- Use names that make the hardware-style meaning of each field clear.

## Design Questions

- Which fields have natural fixed-width hardware-like types?
- Is the struct passed by value or by pointer?
- If a function should not modify a sample, how can `const` express that?
- How would this map later to an ADC reading or packet payload?
- What should the enum values be called?
- What return type should a print-only function have?

## Testing Ideas

- normal sample
- warning threshold
- fault threshold
- minimum raw count
- maximum raw count

## Submission

Write the implementation and send it back for review.
