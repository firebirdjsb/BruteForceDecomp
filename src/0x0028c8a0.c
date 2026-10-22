/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A87E386D6BF1296485585DDD625C8692B377AF070E129C22E67A410DD182F92
 * Entry: 0x0028c8a0, Ghidra index: 9183, label: FUN_0028c8a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0028c8a0(float param_1)

{
  uint uVar1;
  int unaff_EDI;
  undefined1 local_10 [4];
  int local_c;
  
  FUN_001e0dd0(local_10);
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
    *(float *)(local_c + -4 + uVar1 * 4) = (1.0 / param_1) * *(float *)(local_c + -4 + uVar1 * 4);
  } while (uVar1 <= *(uint *)(unaff_EDI + 8));
  FUN_0010bc40();
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_c);
  }
  return 0;
}
