/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 316FC075A5C57D5B93100C9182EE78799E4DDE8ED066CB91417B83D4BE31198D
 * Entry: 0x0013fa80, Ghidra index: 4065, label: FUN_0013fa80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013fa80(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x10) != 0) && ((*(byte *)(*(int *)(in_ECX + 0x10) + 0x70) & 1) == 0)) {
    cVar1 = FUN_00117210();
    if (cVar1 != '\0') {
      FUN_0012e9d0();
    }
  }
  return 1;
}
