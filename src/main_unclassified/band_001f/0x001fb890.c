/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBE8DA8A9239ECBCC8029FD44447D5414273334132C131A8A8990C56012C009D
 * Entry: 0x001fb890, Ghidra index: 7118, label: FUN_001fb890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001fb890(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(char *)(in_EAX + 2) == '\0') {
    return 1;
  }
  if (*(char *)(in_EAX + 4) == '\0') {
    if (in_ECX != 0) {
      return 1;
    }
  }
  else if (in_ECX == 0) {
    return 1;
  }
  return 0;
}
