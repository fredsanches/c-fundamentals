# Exercise: Safer String Copy Design

## Concept Focus

- destination buffer ownership
- explicit buffer capacity
- character count versus buffer size
- null terminator placement
- return values for status
- `const` correctness

## Objective

Redesign your current `my_strcpy` idea so it cannot write outside the destination buffer.

The goal is not to mimic one standard library function exactly. The goal is to design a small C API that makes the memory contract explicit.

Suggested function shape:

```c
int my_strcpy_safe(char dest[], size_t dest_capacity, const char src[]);
```

Return `1` for success and `0` for failure.

## Constraints

- Do not use `<string.h>`.
- Do not use dynamic allocation.
- Do not write to `dest` when `dest_capacity == 0`.
- If `dest_capacity > 0`, keep `dest` as a valid null-terminated string.
- Do not modify `src`.
- Compile with warnings enabled.

## Expected Behavior

- Copy all characters from `src` into `dest` when there is enough space.
- Include the final `'\0'`.
- Report failure if the destination is too small.
- On failure, still leave `dest` null-terminated when capacity allows it.

## Design Questions

- Who owns the destination memory?
- How many bytes are available in `dest`?
- How many bytes are needed to copy `src`, including `'\0'`?
- Where is the last valid index in `dest`?
- What should happen when `src` is an empty string?

## Testing Ideas

- destination larger than needed
- destination exactly large enough
- destination too small
- empty source string
- destination capacity `0`
- one-character source string

## Submission

Write the implementation and send it back for review.
