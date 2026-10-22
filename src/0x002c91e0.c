/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3208D9E9C94297F03D3B77FCA101D923EEFE0F120A9B218BD6EF29C77416759F
 * Entry: 0x002c91e0, Ghidra index: 10133, label: FUN_002c91e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c91e0(int param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  
  iVar1 = *(int *)(in_EAX + 8);
  if (iVar1 != 0) {
    *(undefined4 *)(in_EAX + 8) = 0;
    FUN_002bd570();
    if ((*(short *)(iVar1 + 0x26) == 0) && (*(short *)(iVar1 + 0x1a) == 0)) {
      if (*(int *)(iVar1 + 0x14) == 0) {
        *(undefined4 *)(param_1 + 0x180) = 0;
      }
      uVar2 = FUN_002b2b80();
      FUN_002bea90(iVar1,uVar2);
      FUN_002c8400();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
  }
  return;
}
