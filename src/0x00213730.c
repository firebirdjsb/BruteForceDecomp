/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CD2A9540995FD864DC424532EB9E8EEC5BA5E1AF84AA69D0102A3073D9B56C4
 * Entry: 0x00213730, Ghidra index: 7442, label: FUN_00213730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00213730(uint *param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = (uint)*(byte *)(in_ECX + 0x3c);
  uVar2 = 0;
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      uVar1 = 2;
    }
  } while ((*(int *)(in_ECX + 0x40 + uVar1 * 4) == 0) && (uVar2 = uVar2 + 1, uVar2 < 3));
  *param_1 = uVar1;
  return *(int *)(in_ECX + 0x40 + uVar1 * 4) != 0;
}
