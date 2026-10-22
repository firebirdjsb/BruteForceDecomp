/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A03637E2B0BB116FB27941B031AFAB73CE2692560711A6D34A3B1DA2A9B13FF5
 * Entry: 0x001629c0, Ghidra index: 4651, label: FUN_001629c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001629c0(uint param_1)

{
  uint uVar1;
  uint in_EAX;
  undefined4 uVar2;
  uint *puVar3;
  
  uVar1 = param_1;
  if (in_EAX != param_1) {
    param_1 = param_1 & 0xffffff00;
    puVar3 = (uint *)(in_EAX + 0x28);
    do {
      if (0xf < *puVar3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(puVar3[-5]);
      }
      *puVar3 = 0xf;
      puVar3[-1] = 0;
      uVar2 = FUN_0001f4d0(&param_1);
      FUN_0001f4e0(uVar2);
      in_EAX = in_EAX + 0x2c;
      puVar3 = puVar3 + 0xb;
    } while (in_EAX != uVar1);
  }
  return;
}
