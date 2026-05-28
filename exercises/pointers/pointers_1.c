#include <stdio.h>

int main(void){
  const char *p;
  p = "raven";
  p = "crow";

  /*
  Before:
    p ----> "raven"
    p points to the memory where "raven" lives
  After:
    p ----> "crow"
    now p points to the memory where "crow" lives

  "raven" still exists somewhere in memory.

  The important question:
    Did anything else still know the old address?

  Case 1: old address points to static memory / string literal
    p = "raven";
    p = "crow";
  No problem. "raven" still exist as string literal.

  Case 2: old address points to a stack memory
    char a[]  = "raven";
    char b[]  = "crow";
    char *p   = a;
    p = b;
  No problem. `a` still exists until its scope ends.
  */

  /*
  The declaration below is the same as -> const char *const
  Rule:
    — const applies to the thing on the left.
    — If there's nothing to the left, it applies to the thing on the right
  */ 
  char const *const bird[3] = {
    "raven",
    "magpie",
    "crow"
  };
  //The pointer and the char elements cannot be modified after initialization!
  bird[0]     = "crow"; // not OK: pointer cannot be modified
  bird[0][0]  = 'R';    // not OK: trying to modify const char

  return 0;
}