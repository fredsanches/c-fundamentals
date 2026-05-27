# Exercise: `my_strcmp`

## Concept Focus

- string traversal
- comparing characters
- loop stopping conditions
- signed versus unsigned character interpretation
- return-value conventions

## Objective

Write a function that compares two null-terminated strings.

Suggested function name: `my_strcmp`.

You must decide and type the declaration, definition, parameter list, and return type yourself.

Return:

- `0` when both strings are equal
- a negative value when `left` compares before `right`
- a positive value when `left` compares after `right`

## Constraints

- Do not use `<string.h>`.
- Do not modify either input string.
- Stop when characters differ or both strings reach `'\0'`.
- Think carefully before subtracting plain `char` values.
- Use parameter types that communicate read-only string input.

## Expected Behavior

- Equal strings compare as `0`.
- A shorter string compares before a longer string when all earlier characters match.
- Comparison is character-by-character, not by length first.

## Design Questions

- What are the two possible loop stopping conditions?
- What does it mean if both current characters are `'\0'`?
- What does it mean if only one current character is `'\0'`?
- Why might `unsigned char` matter when comparing byte values?
- What should the return type be?
- What should the two parameters be called?

## Testing Ideas

- equal strings
- strings differing at first character
- strings differing in the middle
- one string is a prefix of the other
- both strings empty
- one empty and one non-empty

## Submission

Write the implementation and send it back for review.
