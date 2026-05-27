# Exercise: `my_strncpy_safe`

## Concept Focus

- explicit buffer sizes
- null-terminated strings
- partial copying
- pointer/index traversal
- failure reporting
- avoiding buffer overflow

## Objective

Write a function that copies a source string into a destination buffer without writing past the destination capacity.

Suggested function shape:

```c
size_t my_strncpy_safe(char dest[], size_t dest_capacity, const char src[]);
```

Return the number of non-null characters copied into `dest`.

## Constraints

- Do not use `<string.h>`.
- Do not use dynamic allocation.
- Do not write anything if `dest_capacity == 0`.
- If `dest_capacity > 0`, `dest` must end as a valid null-terminated string.
- The return value must not count the null terminator.

## Expected Behavior

- If the source fits, copy the whole string and its terminator.
- If the source does not fit, copy as much as possible and write a terminator at the end of `dest`.
- If `dest_capacity == 1`, the only valid output string is `""`.

## Design Questions

- What is the maximum number of real characters that can fit?
- Where must the null terminator go?
- How do you know whether the source was fully copied?
- What should the function return when capacity is `0`?

## Testing Ideas

- source shorter than destination
- source exactly fills destination except for `'\0'`
- source too long
- empty source
- capacity `0`
- capacity `1`

## Submission

Write the implementation and send it back for review.
