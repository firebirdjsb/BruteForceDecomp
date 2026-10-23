/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE8C68A933A34660521D568049A9654701B1B4D752BA1C168384F2ABE8AF5415
 * Entry: 0x00023110, Ghidra index: 218, label: FUN_00023110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00023110(void)

{
  uint in_EAX;
  uint uVar1;
  int in_EDX;
  int unaff_EDI;
  
  for (uVar1 = 0;
      (*(int *)(in_EDX + 8) != 0 &&
      (in_EAX = *(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 8) >> 2, uVar1 < in_EAX));
      uVar1 = uVar1 + 1) {
    in_EAX = *(uint *)(*(int *)(in_EDX + 8) + uVar1 * 4);
    if (*(int *)(in_EAX + 4) == unaff_EDI) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}
