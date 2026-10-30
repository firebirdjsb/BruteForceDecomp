/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A9516655DA6F06F6F969FFBFC3C9307057884B4E30F8915FE06DC0C36E83E2D
 * Entry: 0x001fb7d0, Ghidra index: 7115, label: FUN_001fb7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_001fb7d0(void)

{
  char cVar1;
  int in_EAX;
  int in_ECX;
  
  if (*(char *)(in_ECX + 3) != '\0') {
    if (in_EAX == 0) {
      if (*(char *)(in_ECX + 4) == '\0') {
        return 0;
      }
    }
    else if (*(char *)(in_ECX + 4) == '\0') {
      cVar1 = FUN_00112800();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    else {
      cVar1 = FUN_00112800();
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  return 1;
}
