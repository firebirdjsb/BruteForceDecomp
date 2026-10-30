/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0110E9E785465B089D6CB9B8ED934D3C91AA8FE78043430413CFC2945B33A005
 * Entry: 0x00281810, Ghidra index: 9048, label: FUN_00281810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00281810(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  piVar1 = (int *)(*(int *)(in_ECX + 0x2824) + param_1 * 0xc);
  if (*piVar1 != 0) {
    if ((piVar1[2] == 0) || (piVar1[1] == 0)) {
      FUN_002815d0();
      return;
    }
    uVar2 = FUN_002816b0();
    FUN_00281810(uVar2);
    FUN_00281630();
  }
  return;
}
