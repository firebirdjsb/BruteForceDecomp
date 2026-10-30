/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74B702DB180F28B75AD6D587045E3CDF344A0C1A15EF223889A661962EE1CC6F
 * Entry: 0x000a61d0, Ghidra index: 1970, label: FUN_000a61d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a61d0(int param_1)

{
  int iVar1;
  char in_AL;
  
  if (in_AL == '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    if (((iVar1 == 0) || (iVar1 == 3)) || (iVar1 == 4)) {
      FUN_00062280();
    }
    FUN_002386d0();
  }
  FUN_00238630();
  return;
}
