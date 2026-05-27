# Exercise: `my_strcat_safe`

## Concept Focus

- destination buffer capacity
- finding current string length
- appending without overflow
- null terminator accounting
- API design for caller-owned memory

## Objective

Write a function that appends a source string to the end of a destination string without exceeding the destination buffer capacity.

Suggested function name: `my_strcat_safe`.

You must decide and type the declaration, definition, parameter list, and return type yourself.

Return `1` if the full source string was appended, otherwise return `0`.

## Constraints

- Do not use `<string.h>`.
- Do not use dynamic allocation.
- `dest` must already contain a valid null-terminated string unless `dest_capacity == 0`.
- If `dest_capacity > 0`, keep `dest` null-terminated.
- Do not write outside `dest`.
- Use a type appropriate for buffer capacities.
- Use a parameter type that communicates read-only source input.

## Expected Behavior

- Find the current end of `dest`.
- Append as many characters from `src` as safely fit.
- Write exactly one final null terminator for the resulting string.
- Report failure if the destination did not have enough remaining capacity.

## Design Questions

- How do you find the current length of `dest` without reading past `dest_capacity`?
- What if `dest` is not null-terminated within its capacity?
- How much free space remains after the current destination string?
- Where is the append write index?
- Where is the final `'\0'` written?
- What should the function return type be?
- What names make the destination, capacity, and source roles clear?

## Testing Ideas

- destination has enough spare capacity
- destination is exactly filled after append
- source is too long
- empty source
- empty destination
- capacity `0`
- destination not null-terminated inside its capacity

## Submission

Write the implementation and send it back for review.
